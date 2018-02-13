def circleOfNumbers(n, firstNumber) when (firstNumber >= 0.5*n) do
    firstNumber - 0.5*n
end
def circleOfNumbers(n, firstNumber) when (firstNumber < 0.5*n) do
    (firstNumber) + 0.5*n
end
