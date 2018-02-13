fun seatsInTheater(nCols: Int, nRows: Int, col: Int, row: Int): Int {
    when {
        (row == 1) && (col == 1) -> return 0
        else -> return (nCols - (col - 1)) * (nRows - row)
    }
}
