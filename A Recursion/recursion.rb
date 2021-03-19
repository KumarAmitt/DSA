# Sum of first n Natural Numbers--------------------
# Recursive
def Rsum(n)
  return 1 if n == 1

  Rsum(n - 1) + n
end

n = 8
puts "Sum of  first #{n} Natural Number: #{Rsum(n)}"

#-------------------------------------------------------

# Power m^n
def pow(m, n)
  return 1 if n.zero?

  pow(m, n-1) * m
end

# Power m^n, Fast Method
def power(m, n)
  return 1 if n.zero?

  n.even? ? power(m*m, n/2) : m * power(m*m, (n-1)/2)

end

st = Time.now
puts "Power: #{power(2, 9)}"
et = Time.now

puts "Time: #{et - st}"


