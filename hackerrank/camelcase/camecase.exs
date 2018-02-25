defmodule Solution do
#Enter your code here. Read input from STDIN. Print output to STDOUT
    input_message = IO.gets ""
    capitals = input_message |> String.trim |> String.codepoints |> Enum.filter(fn(x) -> x =~ ~r/^\p{Lu}$/u end) |> Enum.count
    IO.puts capitals + 1 
end
