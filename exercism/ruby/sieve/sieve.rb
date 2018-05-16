class Sieve
    def initialize(number)
        @number = number
    end

    def prime?(num)
        (2..(num - 1)).each do |n|
            return false if num % n == 0
          end
        true
    end

    def primes
        (2..@number).select { |x| x if prime?(x) }
    end
end

module BookKeeping
    VERSION = 1 # Where the version number matches the one in the test.
end