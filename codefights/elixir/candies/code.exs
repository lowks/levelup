def candies(n, m) do
    cond do
        (m > n) ->
        1..m 
        |> Enum.to_list
        |> Enum.filter(fn(x) -> rem(x, n) == 0 end)
        |> Enum.max
        (m == n) -> m
        true -> 0
    end
end
