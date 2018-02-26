defmodule Solution do
#Enter your code here. Read input from STDIN. Print output to STDOUT
    input_number = IO.gets ""
    sum = input_number |> String.split 
          |> Enum.map(fn(x) -> String.to_integer(x) end)
          |> Enum.sum
    min_max = input_number |> String.split 
              |> Enum.map(fn(x) -> String.to_integer(x) end)
              |> Enum.map(fn(x) -> sum - x end)
    IO.puts "#{min_max |> Enum.min} #{min_max |> Enum.max}"
end
