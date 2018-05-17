class Squares
   def initialize(numbers)
      @numbers = (1..numbers)
   end

   def sum_of_squares
       @numbers.map {|x| x*x}.sum
   end

   def square_of_sum
       @numbers.sum ** 2
   end

   def difference
       square_of_sum - sum_of_squares
   end
end

module BookKeeping
   VERSION = 4 
end
