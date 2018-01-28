-module(leap).

-export([leap_year/1, test_version/0]).

leap_year(Year) ->
   if 
	(Year rem 4 == 0) ->
		if
		  (Year rem 100 == 0) ->
			if 
			   (Year rem 400 == 0) ->
				true;
			   true ->
				false	
			end;
		  true ->
			true
     		end;
	true ->
		false
   end.

test_version() -> 3.
