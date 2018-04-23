-module(pangram).

-export([is_pangram/1, test_version/0]).

is_pangram(Sentence) ->
    % length([X || X <- lists:seq($a, $z), lists:member(X, string:to_lower(Sentence))]) == 26.
    lists:all(fun(X) -> lists:member(X, string:to_lower(Sentence)) end, lists:seq($a, $z)).

test_version() -> 1.
