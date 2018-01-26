def centuryFromYear(year) do
    cond do
        (rem(year, 100) > 0) -> year/100 + 1 |> trunc
        true -> year / 100 |> trunc
    end
end
