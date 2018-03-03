class Solution(object):
    def isSelfDivisible(self, number): 
        return_number = 0
        for digit in str(number):
          try:
            if int(number) % int(digit) == 0:
              return_number += 1
          except ZeroDivisionError:
              pass
        return return_number == len(str(number))
      
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        return_list = []
        for number in range(left, right+1):
          if self.isSelfDivisible(number):
            return_list.append(number)
        return return_list
