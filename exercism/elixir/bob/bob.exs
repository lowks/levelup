defmodule Teenager do
  def hey(input) do
    cond do
      said_nothing?(input) -> "Fine. Be that way!"
      question?(input) -> "Sure."
      shout?(input) -> "Woah, chill out!"
      true -> "Whatever."
    end
  end

  defp said_nothing?(input), do: String.strip(input) == ""
  defp question?(input), do: String.ends_with?(input, "?")
  defp shout?(input), do: contains_letters?(input) && String.upcase(input) == input
  defp contains_letters?(input), do: Regex.match?(%r/\p{L}+/, input)
end