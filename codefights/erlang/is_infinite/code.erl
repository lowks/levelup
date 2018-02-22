isInfiniteProcess(A, B) ->
    if 
        (B == A) -> false;
        ((B - A) < 0) -> true;
        ((B - A) rem 2 == 0) -> false;
        true -> true
    end.
