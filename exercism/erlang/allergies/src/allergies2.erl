-module(allergies).

-export([allergies/1, is_allergic_to/2, test_version/0]).

get_allergy(Score) ->
  AllergyMap = #{1 => eggs, 2 => peanuts, 4 => shellfish, 8 => strawberries, 16 => tomatoes, 32 => chocolate, 64 => pollen, 128 => cats}, 
  maps:get(Score, AllergyMap, nil).

allergies(0) -> [];

allergies(Score) ->
	cal_allergy(Score, 0, []).

cal_allergy(0, _, Result) -> Result;

cal_allergy(Score, Index, Result) -> 
	case (Score rem 2 == 1) of
		true -> 
			AllergyIndex = round(math:pow(2, Index)),
			case get_allergy(AllergyIndex) of
				nil -> cal_allergy(Score div 2, Index + 1, Result);
				_ -> cal_allergy(Score div 2, Index + 1, Result ++ [get_allergy(AllergyIndex)])
			end;
		false -> 
			cal_allergy(Score div 2, Index + 1, Result) 
	end.

is_allergic_to(Allergy, Score) ->
	lists:member(Allergy, allergies(Score)).

test_version() -> 1.
