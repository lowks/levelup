defmodule Solution do
#Enter your code here. Read input from STDIN. Print output to STDOUT
    size = IO.gets ""
    input_string = IO.gets ""
    input_integers = input_string 
                    |> String.split 
                    |> Enum.map(fn(x) -> String.to_integer(x) end)
    size_integer = length(input_integers)
    negatives = input_integers
                |> Enum.count(fn(x) -> x < 0 end)
    positives = input_integers
                |> Enum.count(fn(x) -> x > 0 end)
    zeros = input_integers
            |> Enum.count(fn(x) -> x == 0 end)
                
    IO.puts positives/size_integer |> :erlang.float_to_binary([decimals: 6])
    IO.puts negatives/size_integer |> :erlang.float_to_binary([decimals: 6])
    IO.puts zeros/size_integer |> :erlang.float_to_binary([decimals: 6])
end
