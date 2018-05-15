def is_isogram(string):
    frequencies = {}
    normalized_string = ''.join(ch for ch in string if ch.isalnum())
    if len(string) == 0:
        return True
    else:
        for char in normalized_string.lower():
            try:
                frequencies[char] += 1
            except KeyError:
                frequencies[char] = 1
        for k in frequencies.keys():
            if frequencies[k] >= 2:
                return False
    return True

