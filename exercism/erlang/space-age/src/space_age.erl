-module(space_age).

-export([ageOn/2, test_version/0]).

secondsOnEarth() ->
	31557600.

rounding() ->
	math:pow(10, 2).

ageOn(mercury, Seconds) ->
	round(((Seconds/0.2408467)/secondsOnEarth()) * rounding())/rounding();

ageOn(venus, Seconds) ->
	round(((Seconds/0.61519726)/secondsOnEarth()) * rounding())/rounding();

ageOn(jupiter, Seconds) ->
	round(((Seconds/11.862615)/secondsOnEarth()) * rounding())/rounding();

ageOn(saturn, Seconds) ->
	round(((Seconds/29.447498)/secondsOnEarth()) * rounding())/rounding();

ageOn(uranus, Seconds) ->
	round(((Seconds/84.016846)/secondsOnEarth()) * rounding())/rounding();

ageOn(neptune, Seconds) ->
	round(((Seconds/164.79132)/secondsOnEarth()) * rounding())/rounding();

ageOn(mars, Seconds) ->
	round(((Seconds/1.8808158)/secondsOnEarth()) * rounding())/rounding();

ageOn(earth, Seconds) ->
	round(((Seconds/1.0)/secondsOnEarth()) * rounding())/rounding().

test_version() -> 1.
