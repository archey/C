#include <stdio.h>

int fizzbizz(int i){
    int results;

    if (i % 3) {
        printf("%i fizz\n", i);
    } else if (i % 5) {
        printf("%i bizz\n", i);

    }
}

void main() {
    int i = 0;
    for (i=0; i <= 100; i++) {
        fizzbizz(i);
    }
}
