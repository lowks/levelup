-module(clock).

-export([create/2, is_equal/2, minutes_add/2, to_string/1, test_version/0]).
-define(DEC(X), $0 + string:to_integer(X) div 10, $0 + string:to_integer(X) rem 10).

create(Hour, Minutes) ->
  {Hour, Minutes}. 

is_equal(ClockA, ClockB) ->
  to_string(ClockA) == to_string(ClockB).

minutes_add({H, M}, Minutes) ->
  clock:create(H, M + Minutes). 

format_hour_minute(H, M) -> 
	[$0 + (H div 10), $0 + (H rem 10), $:, $0 + (M div 10), $0 + (M rem 10)].

to_string({H, M}) -> 
	do_string(H + (M div 60), (M rem 60)).

do_string(H, M) when H >= 24 ->
	case H == 24 of 
  		true -> format_hour_minute(0 + (M div 60), (M rem 60));
  		false -> 
		   case H >= 37 of
		   	true -> 
			   format_hour_minute(H rem 24, (M rem 60));
			false -> 
			   format_hour_minute(H - 24 + (M div 60), (M rem 60))
		   end
	end;

do_string(H, M) when H < 0 ->
	do_string(24 + (H rem 24), M);

do_string(H, M) when M < 0 ->
	io:fwrite("hoho"),
	case (M div 60) == 0 of
		false -> 
		   format_hour_minute(H - (M div 60), 60 + M rem 60);
		true -> 
		   case (H - 1) > 0 of
		   	true -> format_hour_minute(H - 1, 60 + M rem 60);
			false -> do_string(H - 1, 60 + M rem 60)
		   end
	end;

do_string(H, M) ->
  	format_hour_minute(H + (M div 60), (M rem 60)).

test_version() -> 1.
