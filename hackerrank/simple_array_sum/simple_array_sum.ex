defmodule Solution do
#Enter your code here. Read input from STDIN. Print output to STDOUT
   def sum() do
   		times = IO.gets("") |> String.trim |> String.to_integer
   		result = IO.gets("") |> 
   		String.trim |> 
   		String.split("") |> 
   		Enum.map(fn(x) -> String.to_integer(x) end) |>
   		Enum.take(times) |>
   		Enum.reduce(0, fn(x, acc) -> x + acc end)
   		IO.puts result
   end 
end
Solution.sum