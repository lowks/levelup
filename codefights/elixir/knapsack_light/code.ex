def knapsackLight(value1, weight1, value2, weight2, maxW) do
    cond do
        (weight1 <= maxW) && (weight2 <= maxW) ->
            cond do
                (weight1 + weight2) <= maxW -> value1 + value2
                (weight1 + weight2) > maxW ->
                        cond do
                            value2 > value1 -> value2
                            value1 > value2 -> value1
                            value1 == value2 -> value1
                        end
            end
        (weight1 > maxW) -> 
            cond do
                (weight2 <= maxW) -> value2
                (weight2 > maxW) -> 0
            end
        (weight2 > maxW) ->
            cond do
                (weight1 <= maxW) -> value1 
            end
    end
end
