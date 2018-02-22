def isInfiniteProcess(a, b) do
    difference = b - a
    cond do
        (b == a) -> false
        (difference < 0) -> true
        (rem(difference, 2) == 0) -> false
        true -> true
    end
end
