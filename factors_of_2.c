#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//TODO
//Create logic to check if value entered matches base 2 output
//Create logic to convert binary to decimal

// compile program with gcc -o factors_of_2 factors_of_2.c -lm this links the math header appropriately

void factor_var(int *var, int *var2){
    int num, result; //defined vars as ints
    for(num=1; num<=*var2; num++) {
      result = pow(*var, num); // perform integer to the power of based on base eg, 2^1 as it will loop 1-20
      printf("%d^%d = %d \n", *var, num, result);
    }
}

int main() {
    int base;
    int factor;
    //char base[4];

    printf("Enter an integer: ");
    scanf("%d", &base); //vulnerable to buffer overflow, but need to test first replace with fgets once bad vuln is written.
    printf("Enter number of times to factor: ");
    scanf("%d", &factor);

    // pass pointers of base and factor to the factor_var function
    factor_var(&base, &factor);
}
