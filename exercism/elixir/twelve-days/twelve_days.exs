defmodule TwelveDays do
  @doc """
  Given a `number`, return the song's verse for that specific day, including
  all gifts for previous days in the same line.
  """
  
  @present %{ 1 => {"first", "a Partridge in a Pear Tree"},
	      2 => {"second", "two Turtle Doves"}, 
	      3 => {"third", "three French Hens"},
	      4 => {"fourth", "four Calling Birds"},
	      5 => {"fifth", "five Gold Rings"},
	      6 => {"sixth", "six Geese-a-Laying"},
	      7 => {"seventh", "seven Swans-a-Swimming"},
	      8 => {"eighth", "eight Maids-a-Milking"},
	      9 => {"ninth", "nine Ladies Dancing"},
	      10 =>{"tenth", "ten Lords-a-Leaping"},
	      11 =>{"eleventh", "eleven Pipers Piping"},
	      12 =>{"twelfth", "twelve Drummers Drumming"} }

  @doc """
  Given a `starting_verse` and an `ending_verse`, return the verses for each
  included day, one per line.
  """
  @spec verses(starting_verse :: integer, ending_verse :: integer) :: String.t()
  def verses(starting_verse, ending_verse) do
	do_verses(starting_verse..ending_verse |> Enum.to_list, "") 
  end

  defp do_verses([1], _result) do
	verse(1)
  end

  defp do_verses([], result) do
	result |> String.trim
  end

  defp do_verses([head|tail], result) do
	do_verses(tail, result <> verse(head) <> "\n")
  end

  defp get_present([], result) do
	result |> Sting.trim
  end

  defp get_present([1], result) do
	{_day, present} = Map.get(@present, 1)
	cond do
		String.length(result) == 0 -> result <> present
		true -> result <> "and "<> present
	end
  end

  defp get_present([head|tail], result) do
	{_day, present} = Map.get(@present, head)
	result1 = 
	cond do
		head == 1 -> "and " <> present
		true -> present <> ", "
	end
	get_present(tail, result <> result1)
  end

  @doc """
  Sing all 12 verses, in order, one verse per line.
  """
  @spec sing() :: String.t()
  def sing do
	verses(1, 12)
  end

  @spec verse(number :: integer) :: String.t()
  def verse(number) do
	{day, _present} = Map.get(@present, number)	
	presents = get_present(1..number |> Enum.to_list |> Enum.reverse, "")
	"On the #{day} day of Christmas my true love gave to me, #{presents}."
  end
end
