-module(strain).

-export([keep/2, discard/2, test_version/0]).

keep(Fn, List) ->
  lists:filter(fun(X) -> Fn(X) end, List).

discard(Fn, List) ->
  List -- keep(Fn, List).

test_version() -> 1.
