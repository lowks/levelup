# Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

def adjacentElementsProduct(inputArray) do
    inputArray
    |> Enum.chunk_every(2, 1, :discard)
    |> Enum.map(fn([x, y]) -> x * y end)
    |> Enum.max
end