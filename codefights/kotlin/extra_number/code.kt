fun extraNumber(a: Int, b: Int, c: Int): Int {
    var a = intArrayOf(a, b, c)
    val grouping = a.groupBy {it}
    val filtered = grouping.filter {it.value.count() == 1}
    return filtered.keys.first()
}
