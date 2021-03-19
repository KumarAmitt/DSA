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

// nth term of Fibonacci Series------------------
int fib1(int n){
  if(n <= 1)
    return n;
  
  return fib1(n-2) + fib1(n-1);
}

//Nth term of Fibonacci Series - Memoization------
int F[10];
int fibm(int n){
  if(n <= 1){
    F[n] = n;
    return n;
  }
  
  if(F[n-2] == -1)
    F[n-2] = fibm(n-2);

  if(F[n-1] == -1)
    F[n-1] = fibm(n-1);

  return F[n-2] + F[n-1];

}



//main function-----------------------------------
int main(){
  
  int n = 8;
  // printf("Sum of first %d Natural Numbers: %d \n", n, sum(n));
  // printf("Fatorial of %d: %d\n", n, fact(n));

  // printf("Power: %d\n", pow(3, 4));
  // printf("Power Fast: %d\n", power(3, 4));

  // int r = fib1(6);
  // printf("nth term of Fibonacci Series: %d\n", r);

  // Fibonacci Memoization
  for(int i=0; i<10; i++)
    F[i] = -1;

  int r = fibm(4);
  printf("nth term of Fibonacci Series: %d\n", r);

}