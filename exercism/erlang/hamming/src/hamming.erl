-module(hamming).

-export([distance/2, test_version/0]).


distance(Strand1, Strand2) -> hdistance(Strand1, Strand2, 0).

hdistance([],[], Distance) ->
	Distance;

hdistance(L, L1, Distance) when length(L) /= length(L1) ->
	{error, "left and right strands must be of equal "
		  "length"};

%% It's important that this clause must come before the below one
%% if not calculation of Distance is not correct. 

hdistance([H|T], [H|T1], Distance) ->
	hdistance(T, T1, Distance);

hdistance([H|T], [H1|T1], Distance) ->
	hdistance(T, T1, Distance + 1).


test_version() -> 2.
