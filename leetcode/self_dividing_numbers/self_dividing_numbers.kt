class Solution {
  
    fun isSelfDividing(num: Int): Boolean {
      val input_number = num
      var result = 0
      input_number.toString().toCharArray().toList()
    	.map { it.toString().toInt() }
    	.filter {it != 0}
        .forEach {
        if (input_number % it.toInt() == 0) {
          result += 1
        } 
      }
      return result == input_number.toString().length
}
  
    fun selfDividingNumbers(left: Int, right: Int): List<Int> {
        var return_list = mutableListOf<Int>()
        (left..right).forEach {
          if (isSelfDividing(it)) {
            return_list.add(it)
          }
        }
      return return_list
    }
}
