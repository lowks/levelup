def seatsInTheater(nCols, nRows, col, row) do
    case {col, row} do
        {1, 1} -> 0
        {col, row} -> (nCols - (col - 1)) * (nRows - row)
    end
end
