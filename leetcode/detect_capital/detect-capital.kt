class Solution {
    fun detectCapitalUse(word: String): Boolean {
        if (word.length == 1) {
          return true
        } else {
            var word_list = word.toCharArray().toList()
            if (word.capitalize() == word) {
              if (word_list.all() { it.toUpperCase() == it }) {
                return true
              } else if (word_list.take(1)[0] == word_list.take(1)[0].toUpperCase()) {
                return !(word_list.slice(1..word.length-1).any() { it.toUpperCase() == it })
              } else { 
                return word_list.all() { it.toUpperCase() != it }
              }
            } else {
                return (word_list.slice(1..word.length-1).all() { 
                    it.toUpperCase() != it })
            }
        }
      }
   }