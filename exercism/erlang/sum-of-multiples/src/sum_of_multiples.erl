-module(sum_of_multiples).

-export([sumOfMultiples/2, test_version/0]).

sumOfMultiples(Multiples, 1) ->
  0;

sumOfMultiples(Multiples, N) ->
  cal_multiples(Multiples, lists:seq(1, N-1), 0).

cal_multiples([H|T], Sequence, Sum) ->
  Filtered = lists:filter(fun(X) -> X rem H == 0 end, Sequence),
  cal_multiples(T, Sequence -- Filtered, Sum + lists:sum(Filtered));

cal_multiples([], _, Sum) -> Sum. 

test_version() -> 1.
