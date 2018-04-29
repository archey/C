#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//TODO
//Create logic to check if value entered matches base 2 output
//Create logic to convert binary to decimal

// compile program with gcc -o factors_of_2 factors_of_2.c -lm this links the math header appropriately

void factor_var(int *var){
    int i, result; //defined vars as ints
    for(i=1; i<=20; i++) {
      result = pow(*var, i); // perform integer to the power of based on base eg, 2^1 as it will loop 1-20
      printf("%d^%d = %d \n", *var, i, result);
    }
}

int main() {
    int base;
    //char base[4];

    printf("\nEnter an integer: ");
    scanf("%d", &base); //vulnerable to buffer overflow, but need to test first
    //fgets(base,4,stdin);


    factor_var(&base);
    /*
    for(i=1; i<=20; i++) {
        result = pow(base, i);
        printf("%d^%d = %d \n", base, i, result);
    }
    */
}
