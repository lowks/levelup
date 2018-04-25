-module(leap).

-export([leap_year/1, test_version/0]).

leap_year(Year) -> 
    leap_year(Year, 4, true).

leap_year(Year, 4, Result) ->
    leap_year(Year, 100, Year rem 4 =:= 0);

leap_year(Year, 100, false) -> false;

leap_year(Year, 100, true) when (Year rem 100 == 0) -> leap_year(Year, 400, false);

leap_year(Year, 100, true) -> leap_year(Year, 400, true);

leap_year(Year, 400, true) -> true;

leap_year(Year, 400, false) -> Year rem 400 == 0.

test_version() -> 3.
