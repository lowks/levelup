-module(grains).

-export([square/1, total/0, test_version/0]).

square(N) -> cal_grains(N, 1).

cal_grains(1, Grains) ->
	Grains;

cal_grains(N, Grains) ->
	cal_grains(N-1, 2*Grains).

total() -> cal_total_grains(64, 0).

cal_total_grains(0, Total) ->
	Total;

cal_total_grains(N, Total) ->
	cal_total_grains(N-1, Total+square(N)).

test_version() -> 1.
