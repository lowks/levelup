def lateRide(n) do
    [{h,_}|m] = [n/60|> Float.to_string |> Integer.parse(10)|rem(n, 60)]
    h_list = Integer.to_string(h)|> String.codepoints
    m_list = Integer.to_string(m)|> String.codepoints
    h_list ++ m_list |> Enum.reduce(0, fn(x, acc) -> String.to_integer(x) + acc end)
end
