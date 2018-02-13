circleOfNumbers(N, FirstNumber) when (FirstNumber >= 0.5*N) -> FirstNumber - 0.5*N;
circleOfNumbers(N, FirstNumber) when (FirstNumber < 0.5*N) -> (FirstNumber) + 0.5*N.
