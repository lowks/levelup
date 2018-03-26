-module(isogram).

-export([is_isogram/1, test_version/0]).

is_isogram(String) -> isogram(string:lowercase(String)).
isogram([]) -> true;
isogram([H|T]) when H >= $a, H =< $z ->
	case lists:any(fun(X) -> X == H end, T) of
		true -> false;
		false -> isogram(T)
	end;
isogram([_|T]) -> isogram(T).

test_version() ->
    1.
