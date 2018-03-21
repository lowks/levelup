-module(rna_transcription).

-export([to_rna/1, test_version/0]).


to_rna(Strand) -> to_rna(Strand, "").

convert($G) -> $C;
convert($C) -> $G;
convert($T) -> $A;
convert($A) -> $U;
convert(_) -> error.

to_rna([], Acc) ->
	Acc;

to_rna([H|T], Acc)  ->
	case convert(H) of
		error -> error;
		_ -> to_rna(T, Acc ++ [convert(H)])
	end.
	
test_version() -> 2.
