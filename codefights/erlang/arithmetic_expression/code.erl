arithmeticExpression(A, B, C) ->
      if  A + B == C -> true;
        A - B == C -> true;
        A * B == C -> true;
        (trunc(A/B) == C) and ((A rem B) == 0) -> true;
        true -> false
      end.
