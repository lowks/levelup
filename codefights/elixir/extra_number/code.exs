def extraNumber(a, b, c) when (b == c) do
    a
end
def extraNumber(a, b, c) when (a == c) do
    b
end
def extraNumber(a, b, c) when (a == b) do
    c
end
