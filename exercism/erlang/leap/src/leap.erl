-module(leap).

-export([leap_year/1, test_version/0]).


leap_year(Year) -> 
case (Year rem 4) of
	0 -> true
	_ -> false
end.

test_version() -> 3.
