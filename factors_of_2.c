#include<stdio.h>
#include<math.h>

//TODO
//Create logic to check if value entered matches base 2 output
//Create logic to convert binary to decimal

int main() {
    int base, i, result;

    printf("\nEnter an integer: ");
    scanf("%d", &base);

    for(i=1; i<=20; i++) {
        result = pow(base, i);
        printf("%d^%d = %d \n", base, i, result);
    }
}
