-module(sieve).

-export([sieve/1, test_version/0]).

sieve(N) -> 
  [X || X <- lists:seq(2, N), do_sieve(X)].

do_sieve(N) ->
  lists:all(fun(X) -> N rem X /= 0 end, lists:seq(2, N - 1)).

test_version() -> 1.
