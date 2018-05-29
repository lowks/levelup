# Please implement your solution to bob in this file
class Bob
   def self.hey(input)
     fine        = "Fine. Be that way!"
     whoa        = "Whoa, chill out!"	
     sure        = "Sure."
     whatever    = "Whatever."
     calm	 = "Calm down, I know what I'm doing!"
     input = input.strip()
     if (input.size == 0)
      	return fine
     end
     if (input.upcase == input) && ( input.downcase != input)
 	return whoa 
     end
     if (input.ends_with? "?") 
 	return sure
     end
     return whatever
   end
end
