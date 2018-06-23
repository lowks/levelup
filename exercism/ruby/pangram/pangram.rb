class Pangram
  def self.pangram?(phrase)
    ('a'..'z').all? { |x| phrase.downcase.include?(x) }
  end
end
module BookKeeping
  VERSION = 6
end
