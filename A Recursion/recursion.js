// Sum of first N natural Numbers---------------------
function sum(n){
  if (n == 1)
    return 1
  
  return sum(n - 1) + n
}

let n = 8
console.log(`Sum of first ${n} Natural Number: ${sum(n)}`)

