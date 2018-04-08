-module(allergies).

-export([allergies/1, is_allergic_to/2, test_version/0]).

get_allergy(Score) ->
  AllergyMap = #{1 => eggs, 2 => peanuts, 4 => shellfish, 8 => strawberries, 16 => tomatoes, 32 => chocolate, 64 => pollen, 128 => cats}, 
  maps:get(Score, AllergyMap, nil).

allergies(0) -> [];

allergies(1) -> [get_allergy(1)];

allergies(Score) ->
	BinaryScore = erlang:integer_to_list(Score, 2),
	Zipped = lists:zip(BinaryScore, lists:reverse(lists:seq(0, length(BinaryScore) - 1))),
	ReturnList = [get_allergy(round(math:pow(2, Y))) || {X, Y} <- Zipped, (X == $1) and (get_allergy(round(math:pow(2, Y))) /= nil)], 
	lists:reverse(ReturnList).

is_allergic_to(Allergy, Score) ->
	lists:member(Allergy, allergies(Score)).

test_version() -> 1.
