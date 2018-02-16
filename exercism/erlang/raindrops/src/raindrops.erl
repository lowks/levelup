-module(raindrops).

-export([convert/1, test_version/0]).

convert(Number) -> convert(Number, 3, "").

convert(Number, Divisor, Acc) when Divisor =:= 3 ->
      case Number rem Divisor of 
	0 ->
                convert(Number, 5, Acc ++ "Pling");
	_ ->
		convert(Number, 5, Acc)
      end;

convert(Number, Divisor, Acc) when Divisor =:= 5 ->
      case Number rem Divisor of 
	0 ->
      		convert(Number, 7, Acc ++ "Plang");
	_ -> 
		convert(Number, 7, Acc)
      end;

convert(Number, Divisor, Acc) when Divisor =:= 7 ->
      case Number rem Divisor of 
	0 ->
      		Acc ++ "Plong";
	_ -> 
		convert(Number, 8, Acc)	
      end;

convert(Number, Divisor, Acc) when Divisor =:= 8 ->
      case string:length(Acc) of 
	0 ->	
      		Acc ++ integer_to_list(Number);
	_ ->
		Acc
	end.

test_version() -> 1.
