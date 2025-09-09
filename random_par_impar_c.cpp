#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, num, pares = 0, impares = 0;

    srand(time(NULL));

    for(i = 0; i < 500; i++) {
        num = 50 + rand() % 51; // [50,100]
        if(num % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("Cantidad de pares: %d\n", pares);
    printf("Cantidad de impares: %d\n", impares);

    return 0;
}
