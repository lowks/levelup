-module(bob).

-export([response/1, test_version/0]).
-compile(export_all).


response(String) -> bob_response(String, "None").

ends_with_exclamation(L) ->
	case lists:suffix("!", L) of
		true -> true;
		_ -> false	
	end.

ends_with_question(L) ->
	case lists:suffix("?", string:strip(L)) of
		true -> true;
		_ -> false	
	end.

contains_question(L) ->
	string:find(L, "?") =:= "?".

nothing_inside(L) ->
	Empty = string:strip(L) =:= [], 
	Nonsense = (is_re_match(re:run(L, "[A-Za-z]+")) == false),
	Number = (is_re_match(re:run(L, "[0-9]+")) == false),
	Empty or (Nonsense and Number).

whoa() -> "Whoa, chill out!".
whatever() -> "Whatever.".
sure() -> "Sure.".
fine() -> "Fine. Be that way!".

is_uppercase(L) ->
	string:uppercase(L) == L andalso is_re_match(re:run(L, "[A-Z]+")).

is_re_match({match,_}) -> true;
is_re_match(_) -> false.

bob_response(L, Response) ->
	case {is_uppercase(L), ends_with_question(L), ends_with_exclamation(L), nothing_inside(L), contains_question(L)} of
		{true,_,_,_,_} -> whoa(); 
		{_,true,_,_,_} -> sure();
		{_,_,_,true,_} -> fine();
		{_,_,_,_,_} -> whatever()
	end.

test_version() -> 2.
