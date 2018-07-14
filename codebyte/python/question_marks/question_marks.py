def QuestionsMarks(str):
    
    is_true = "false"
    
    for index, char in enumerate(str):
        if char == "?":
            try:
                if (str[index + 1] == "?") and (str[index + 2] == "?"):
                    is_true = "true"
            except:
                pass

    # code goes here 
    return is_true
    
# keep this function call here  
print QuestionsMarks(raw_input())