-module(leap).

-export([leap_year/1, test_version/0]).


leap_year(Year) -> 
case (Year rem 4) of
	0 -> 
	    case (Year rem 100) of
		0 -> 
		    case (Year rem 400) of
			0 -> true;
			_ -> false
		    end;
		_ -> true
	    end;
	_ -> false
end.

test_version() -> 3.
