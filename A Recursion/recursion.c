#include <stdio.h>

// Sum of firts n Natural numbers-----------------
int sum(int n){
  if(n == 1)
    return 1;
  
  return sum(n-1) + n;
}

// Factorial of n---------------------------------
int fact(int n){
  if(n == 0)
    return 1;

  return fact(n-1)*n;
}

//Power m^n---------------------------------------
int pow(int m, int n){
  if(n == 0)
    return 1;
  
  return pow(m, n-1) * m;
}

//Power m^n, Fast method--------------------------
int power(int m, int n){
  if(n == 0)
    return 1;
  
  if(n % 2 == 0)
    return power(m*m, n/2);
  else
    return m * power(m*m, (n-1)/2);
}

//main function-----------------------------------
int main(){
  
  int n = 8;
  printf("Sum of first %d Natural Numbers: %d \n", n, sum(n));
  printf("Fatorial of %d: %d\n", n, fact(n));

  printf("Power: %d\n", pow(3, 4));
  printf("Power Fast: %d\n", power(3, 4));
}