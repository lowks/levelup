-module(bob).

-export([response/1, test_version/0]).
%% -compile(export_all).


response(String) -> bob_response(String, "None").

ends_with_exclamation(L) ->
	case lists:suffix("!", L) of
		true -> true;
		_ -> false	
	end.

ends_with_question(L) ->
	case lists:suffix("?", L) of
		true -> true;
		_ -> false	
	end.

whoa() -> "Whoa, chill out!".
whatever() -> "Whatever.".
sure() -> "Sure.".
fine() -> "Fine. Be that way!".

is_uppercase(L) ->
	string:uppercase(L) == L.

bob_response(L, Response) ->
	case {is_uppercase(L), ends_with_question(L), ends_with_exclamation(L)} of
		{true, false, _} -> whoa; 
		{false, true, false} -> sure
	end.

%% bob_response(_, _) ->
%%	"Fine. Be that way!";

%% bob_response([], "Whoa") -> "Whoa, chill out!".

test_version() -> 2.
