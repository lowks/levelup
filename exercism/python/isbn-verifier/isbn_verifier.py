def verify(isbn):
    if len(isbn) <= 0:
	return False
    if "-" in isbn:
       full_isbn = isbn.split("-")
    else:
       full_isbn = [x for x in isbn]
    check_number = full_isbn[-1]
    try:
        control_number = int(check_number)
    except ValueError:
        if check_number != "X":
		return False
	else:
		control_number = 10
    try:
	int_split_isbn = [int(x) for x in ''.join(full_isbn[:-1])]
    	zipped = zip(int_split_isbn, range(len(int_split_isbn) + 1, 0, -1))
	return (sum([x * y for x, y in zipped]) + (control_number * 1)) % 11 == 0
    except ValueError:
	return False
