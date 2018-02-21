def extraNumber(a, b, c):
    numbers = {}
    for number in [a, b, c]:
        try:
            numbers[number] += 1
        except KeyError:
            numbers[number] = 1
    for key in numbers:
        if numbers[key] == 1:
            return key
