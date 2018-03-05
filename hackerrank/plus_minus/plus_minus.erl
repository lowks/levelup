-module(solution).
-export([main/0]).

main() ->

    { ok, [N]} = io:fread("", "~d"),
    Arr = read_array(N,"~d"),
    F_positive = count_element(Arr, positive)/N,
    F_negative = count_element(Arr, negative)/N,
    F_zero = count_element(Arr, zero)/N,
    io:fwrite("~.6f~n~.6f~n~.6f~n", [F_positive, F_negative, F_zero]),
    true.

count_element(L, negative) ->
        length(lists:filter(fun(X) -> X < 0 end, L));

count_element(L, positive) ->
        length(lists:filter(fun(X) -> X > 0 end, L));

count_element(L, zero) ->
        length(lists:filter(fun(X) -> X == 0 end, L)).

read_array(0,D) -> [];
read_array(N,D) -> 
   {ok, [X]} = io:fread("", D),
   [X | read_array(N-1,D)].

read_2darray(0,M,D) -> [];
read_2darray(N,M,D) ->
   Q=read_array(M,D),
   [Q | read_2darray(N-1,M,D)].


