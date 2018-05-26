import strutils, critbits

type TWordCount* = CritBitTree[int]

proc wordCount*(input_string: string): TWordCount =
    for word in input_string.split(AllChars - Letters - Digits - {'\0'}):
        let lower_word = word.toLowerAscii
        if lower_word.len == 0:
            continue
        if not result.hasKey(lower_word):
            result[lower_word] = 0
        result[lower_word] = result[lower_word] + 1


