def LetterCapitalize(str): 

    # code goes here 
    return ' '.join(list(map(lambda x: x.capitalize(), str.split(" "))))
    
# keep this function call here  
print LetterCapitalize(raw_input())