def is_pangram(sentence):
    az_string = set([ord(ch) for ch in "abcdefghijklmnopqrstuvwxyz"])
    sentence_set = set([ord(ch) for ch in sentence.lower()])
    return az_string.issubset(sentence_set)
