class SpaceAge(val seconds: Long) {

    val secondsOnEarth = 31557600L

//    fun calculatePeriodWithPlanet(period: Double): Double {
//        val years = (seconds / period) / secondsOnEarth
//        return Math.round(years * 100.0) / 100.0
//    }

    fun calculatePeriodWithPlanet(planet: String="earth", seconds: Long): Double {
        val cofactor = when(planet) {
            "mercury" -> 0.2408467
            "venus" -> 0.61519726
            "mars" -> 1.8808158
            "jupiter" -> 11.862615
            "saturn" -> 29.447498
            "uranus" -> 84.016846
            "neptune" -> 164.79132
            else -> 1.0
        }
        val calculated_years = (seconds/cofactor) / secondsOnEarth
        return Math.round(calculated_years * 100.0) / 100.0
    }

    fun onMercury(): Double = calculatePeriodWithPlanet(planet="mercury", seconds=seconds)
    fun onVenus(): Double = calculatePeriodWithPlanet(planet="venus", seconds=seconds)
    fun onEarth(): Double = calculatePeriodWithPlanet(planet="earth", seconds=seconds)
    fun onMars(): Double = calculatePeriodWithPlanet(planet="mars", seconds=seconds)
    fun onJupiter(): Double = calculatePeriodWithPlanet(planet="jupiter", seconds=seconds)
    fun onSaturn(): Double = calculatePeriodWithPlanet(planet="saturn", seconds=seconds)
    fun onUranus(): Double = calculatePeriodWithPlanet(planet="uranus", seconds=seconds)
    fun onNeptune(): Double = calculatePeriodWithPlanet(planet="neptune", seconds=seconds)
}