fun lateRide(n: Int): Int {
    var result =  (n%60)
    .toString()
    .toCharArray()
    .toList()+ (n/60)
               .toString()
               .toCharArray()
               .toList()
    
    return result.toList()
    .map { it.toString().toInt() }
    .reduce { sum,element -> sum + element }
}
