-module(atbash_cipher).

-export([encode/1, decode/1, test_version/0]).

encode(String) -> 
	RemoveWhiteSpace = re:replace(String, "\\s+", "", [global,{return,list}]),
	do_encode(string:lowercase(RemoveWhiteSpace), "").

divide(List, N) ->
  divide(List, N, length(List)).

divide(List, N, Length) when Length > N ->
  {A, B} = lists:split(N, List),
  [A | divide(B, N, Length - N)];
divide(List, _, _) ->
  [List].

do_encode([H|T], Result) when H >= $a, H =< $z ->
	ReverseList = lists:reverse(lists:seq($a, $z)),
	Encoded = string:slice(ReverseList, H - 97, 1),
	do_encode(T, Result++Encoded);

do_encode([H|T], Result) when H >= $0, H =< $9  ->
	do_encode(T, Result++[H]);

do_encode([H|T], Result) ->
	do_encode(T, Result);

do_encode([], Result) -> string:join(divide(Result, 5), " ").

decode(String) ->
   re:replace(do_encode(String, ""), "\\s+", "", [global,{return,list}]).

test_version() -> 1.
