defmodule PigLatin do
  @doc """
  Given a `phrase`, translate it a word at a time to Pig Latin.

  Words beginning with consonants should have the consonant moved to the end of
  the word, followed by "ay".

  Words beginning with vowels (aeiou) should have "ay" added to the end of the
  word.

  Some groups of letters are treated like consonants, including "ch", "qu",
  "squ", "th", "thr", and "sch".

  Some groups are treated like vowels, including "yt" and "xr".
  """
  @spec translate(phrase :: String.t()) :: String.t()
  def translate(phrase) do
	case String.contains?phrase, " " do
		false -> do_translate(phrase)
		true -> do_translate(phrase |> String.split)
	end
  end

  def do_translate(phrase) when is_list(phrase) do
	phrase |> Enum.map(fn(x) -> do_translate(x) end) |> Enum.join(" ")
  end 

  def do_translate(phrase) when is_bitstring(phrase) do
	case String.first(phrase) in ["a","e","i","o","u"] do
		true ->
			phrase <> "ay"
		false ->
			moved = move_consonant(String.codepoints(phrase)) |> Enum.join
			moved <> "ay"
	end	
  end

  def move_consonant([head | [head1|tail1]]) do
	case head in ["a","e","i","o","u"] do
		true -> [head] ++ [head1] ++ tail1
		false -> 
		 	# case head <> head1 in ["xr", "xb", "yd", "yt", "qu"] do  	
			cond do
				head <> head1 == "qu" -> tail1 ++ [head] ++ [head1]
				head <> head1 in ["xr", "xb", "yd", "yt"] -> [head] ++ [head1] ++ tail1
				true -> move_consonant([head1] ++ tail1 ++ [head])
			end
	end 
  end
end
