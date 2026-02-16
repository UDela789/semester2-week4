
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    for(int k = 0; k < f; k++){
      int factorial = f[k] * (f[k]  -1);
      printf("Factorial: %d", factorial);
    }
    
    return 0;
 }
