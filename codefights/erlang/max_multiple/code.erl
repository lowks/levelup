maxMultiple(Divisor, Bound) ->
    Y = lists:filter(fun(X) -> X rem Divisor == 0 end, lists:seq(1, Bound)),
    lists:max(Y).
