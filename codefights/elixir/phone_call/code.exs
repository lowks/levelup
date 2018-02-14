def phoneCall(min1, min2_10, min11, s) do
    calculate_cost(min1, min2_10, min11, s)
end

def calculate_cost(min1, min2_10, min11, s) when (s > min1) do
    cond do 
        ((s - min1) - min2_10*9) > 0 -> 10 +  elem((((s - min1) - min2_10*9)/min11) |> to_string |> Integer.parse(10), 0)
        ((s - min1) - min2_10*9) < 0 -> 1 + elem(((s - min1)/min2_10) |> to_string |> Integer.parse(10), 0)
    end
end

def calculate_cost(min1, min2_10, min11, s) when (s < min1) do
    0
end

def calculate_cost(min1, min2_10, min11, s) when (s == min1) do
    1
end


# 1. Minus cost of 1st Minute from s
# 2. Take the total and minus from minute 2 to 10: (s - min1) - (s - min2_10*9)
# 3. If s is still not zero: remaining / min11 

# Total => 1 + 9 + total from step 3

