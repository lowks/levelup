def merge_string(string1, string2):
    output_string = ""
    if len(string1) > len(string2):
        zipped = zip(string1, string2.ljust(len(string1)))
    elif len(string1) < len(string2):
        zipped = zip(string1.ljust(len(string2)), string2)
    else:
        zipped = zip(string1, string2)
    for char1, char2 in zipped:
        output_string += char1 + char2
    return ''.join([char for char in output_string if char != ' '])
    
