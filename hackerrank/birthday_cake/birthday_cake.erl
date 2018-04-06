-module(solution).
-export([main/0]).
-import(os, [getenv/1]).

%
% Complete the birthdayCakeCandles function below.
%
birthdayCakeCandles(N, Ar) ->
    %
    % Write your code here.
    %
    find_longest_candle(Ar, lists:max(Ar), 0).

find_longest_candle([], Max, Result) -> Result;

find_longest_candle([H|T], Max, Result) ->
    case H == Max of
        true -> find_longest_candle(T, Max, Result + 1);
        false -> find_longest_candle(T, Max, Result)
    end.

read_multiple_lines_as_list_of_strings(N) ->
    read_multiple_lines_as_list_of_strings(N, []).

read_multiple_lines_as_list_of_strings(0, Acc) ->
    lists:reverse(Acc);
read_multiple_lines_as_list_of_strings(N, Acc) when N > 0 ->
    read_multiple_lines_as_list_of_strings(N - 1, [string:chomp(io:get_line("")) | Acc]).

main() ->
    {ok, Fptr} = file:open(getenv("OUTPUT_PATH"), [write]),

    {N, _} = string:to_integer(string:chomp(io:get_line(""))),

    ArTemp = re:split(string:chomp(io:get_line("")), "\\s+", [{return, list}, trim]),

    Ar = lists:map(fun(X) -> {I, _} = string:to_integer(X), I end, ArTemp),

    Result = birthdayCakeCandles(N, Ar),

    io:fwrite(Fptr, "~w~n", [Result]),

    file:close(Fptr),

    ok.
