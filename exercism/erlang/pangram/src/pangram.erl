-module(pangram).

-export([is_pangram/1, test_version/0]).

is_pangram(Sentence) ->
    pangram(lists:seq($a, $z), string:lowercase(Sentence)).

pangram([], _) -> true;

pangram([H1|T1], L) ->
	case lists:member(H1, L) of
		true -> pangram(T1, L);
		false -> false
	end.

test_version() -> 1.
