defmodule Raindrops do
  defp do_convert(number, result) do
	
  end
  @doc """
  Returns a string based on raindrop factors.

  - If the number contains 3 as a prime factor, output 'Pling'.
  - If the number contains 5 as a prime factor, output 'Plang'.
  - If the number contains 7 as a prime factor, output 'Plong'.
  - If the number does not contain 3, 5, or 7 as a prime factor,
    just pass the number's digits straight through.
  """
  def convert(number, result) when rem(number, 3) == 0 do
	cond do
		String.contains? result, "Pling" -> convert(div(number, 3), result)	
		true -> convert(div(number, 3), result <> "Pling")	
	end
  end

  def convert(number, result) when rem(number, 5) == 0 do
	cond do
		String.contains? result, "Plang" -> convert(div(number, 5), result)	
		true -> convert(div(number, 5), result <> "Plang")
	end
  end

  def convert(number, result) when rem(number, 7) == 0 do
	cond do
		String.contains? result, "Plong" -> convert(div(number, 7), result)	
		true -> convert(div(number, 7), result <> "Plong")	
	end
  end
  
  def convert(1, result) do 
	result
  end

  def convert(number, result) do
	convert(1, result)
  end

  @spec convert(pos_integer) :: String.t()
  def convert(number) do
	cond do
		convert(number, "") == "" -> number |> Integer.to_string
		true -> convert(number, "") 
	end
  end
end
