defmodule SecretHandshake do
  @doc """
  Determine the actions of a secret handshake based on the binary
  representation of the given `code`.

  If the following bits are set, include the corresponding action in your list
  of commands, in order from lowest to highest.

  1 = wink
  10 = double blink
  100 = close your eyes
  1000 = jump

  10000 = Reverse the order of the operations in the secret handshake
  """
  @spec commands(code :: integer) :: list(String.t())

  @actions ["wink", "double blink", "close your eyes", "jump"]

  defp find_combo(list_bin_code, actions) do
    Enum.map(Enum.zip(list_bin_code, actions), fn({k, v}) -> if (k == "1"), do: v end)
    |> Enum.filter(fn(x) -> not is_nil(x) end)
  end

  def commands(code) when code <= 15 do
    list_bin_code = Integer.to_string(code, 2) |> String.codepoints |> Enum.reverse
    find_combo(list_bin_code, @actions)
  end

  def commands(code) when code > 15 do
    list_bin_code = Integer.to_string(code - 16, 2) |> String.codepoints |> Enum.reverse
    find_combo(list_bin_code, @actions) |> Enum.reverse
  end
end
