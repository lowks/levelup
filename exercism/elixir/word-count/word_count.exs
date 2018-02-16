defmodule Words do
  def count(sentence) do
    sentence |> normalize |> find_words |> count_words
  end

  defp count_words(words) do
    Enum.reduce(words, HashDict.new, fn(word, dict) ->
                HashDict.update(dict, word, 1, &(&1 + 1))
    end)
  end

  defp find_words(sentence) do
    Regex.scan(%r/\w+/, sentence) |> List.flatten
  end

  defp normalize(string) do
    String.downcase(string)
  end
end