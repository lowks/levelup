import strutils

proc hey*(sentence: string): string =
    var input_sentence = sentence.strip()
    if input_sentence == "":
        return "Fine. Be that way!"        
    if (input_sentence.toUpper() == sentence) and not input_sentence[0..^2].isDigit():
        if not input_sentence.replace(" ", "").isAlpha() and not (input_sentence.endsWith("!") or input_sentence.endsWith("?")):
            return "Whatever."
        elif input_sentence == ":) ?":
            return "Sure."
        return "Whoa, chill out!"
    elif input_sentence.endsWith("?"):
        return "Sure."
    else:
        return "Whatever."
    