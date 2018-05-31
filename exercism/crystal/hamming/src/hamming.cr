# Please implement your solution to hamming in this file
class Hamming
  def self.compute(dna1, dna2)
    if dna1.size != dna2.size
      raise ArgumentError.new("Boom !")
    end
    idx = 0
    distance = 0
    while (idx < dna1.size)
      if dna1[idx] != dna2[idx]
        distance += 1
      end
      idx += 1
    end
    return distance
  end
end
