# Enter your code here. Read input from STDIN. Print output to STDOUT
import string
input_string = raw_input()

if all(char in input_string.lower() for char in string.ascii_lowercase):
    print "pangram"
else:
    print "not pangram"
