class Complement
  def self.of_dna(dna)
    string = ""
    dna.each_char { |c| string += translate(c) }
    return (dna.length == string.length) ? string: ""
  end

  def self.translate(dna)
    {"G" => "C", "C" => "G", "A" => "U", "T" => "A"}.fetch(dna, "")
  end
end

module BookKeeping
  VERSION=4
end
