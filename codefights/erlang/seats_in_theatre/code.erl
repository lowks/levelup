seatsInTheater(_, _, 1, 1) -> 0;
seatsInTheater(NCols, NRows, Col, Row) ->
    (NCols - (Col -1)) * (NRows - Row).
