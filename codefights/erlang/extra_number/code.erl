extraNumber(A, B, C) when (B == C) ->
    A;
extraNumber(A, B, C) when (A == C) ->
    B;
extraNumber(A, B, C) when (A == B) ->
    C.
