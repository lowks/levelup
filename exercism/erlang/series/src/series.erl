-module(series).

-export([from_string/2, test_version/0]).
-compile(export_all).

from_string(Width, String) ->
  from_string(Width, String, 1, []).

from_string(Width, [H|T], Iterator, Result) when length([H|T]) >= Width ->
  from_string(Width, T, Iterator, Result ++ [lists:sublist([H|T], 1, Width)]);

from_string(Width, L, _, Result) -> 
  Result.

test_version() -> 1.
