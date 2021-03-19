# Sum of first n Natural Numbers--------------------
def Rsum(n)
  return 1 if n == 1

  Rsum(n - 1) + n
end

n = 8
puts "Sum of  first #{n} Natural Number: #{Rsum(n)}"

#-------------------------------------------------------

# Factorial
def fact(n)
  return 1 if n.zero?

  fact(n - 1) * n
end

puts "Factorial: #{fact(6)}"
#-------------------------------------------------------

# Power m^n
def pow(m, n)
  return 1 if n.zero?

  pow(m, n - 1) * m
end

# Power m^n, Fast Method
def power(m, n)
  return 1 if n.zero?

  n.even? ? power(m * m, n / 2) : m * power(m * m, (n - 1) / 2)

end

puts "Power: #{power(2, 9)}"

#---------------------------------------------------------

# Fibonacci series

def fib(n)
  return n if n <= 1
  
  fib(n - 2) + fib(n - 1)
end

puts "nth term of fibonacci series: #{fib(6)}"

# Fibonacci series - memoization
@ft = []
def fibm(n)
  if n <= 1
    @ft[n] = n
    return n
  end

  @ft[n-2] = fibm(n-2) if @ft[n-2].nil?
  @ft[n-1] = fibm(n-1) if @ft[n-1].nil?

  @ft[n-2] + @ft[n-1]
end

# Fibonacci serise - momization
@cache = [0, 1]
def fibb(n)
  return @cache[n] if @cache[n]

  @cache[n] = fibb(n-2) + fibb(n-1)
end

puts "nth term of Fibonacci series: #{fibb(7)}"


