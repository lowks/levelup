# @param {Integer[]} nums
# @return {Boolean}
def contains_duplicate(nums)
  counts = Hash.new 0
  nums.each do |integer|
    counts[integer] += 1
  end
  counts.values.select {|item| item > 1 }.size >= 1
end
