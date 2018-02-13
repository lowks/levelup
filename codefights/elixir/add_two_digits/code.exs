def addTwoDigits(n) do
    n
    |> to_string
    |> String.codepoints 
    |> Enum.map(fn(x) -> String.to_integer(x) end) 
    |> Enum.sum
end
