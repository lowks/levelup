#!/bin/ruby

def simpleArraySum(n, ar)
    # Complete this function
    ar[0, n].inject(0){|sum,x| sum + x }
end

n = gets.strip.to_i
ar = gets.strip
ar = ar.split(' ').map(&:to_i)
result = simpleArraySum(n, ar)
puts result;

