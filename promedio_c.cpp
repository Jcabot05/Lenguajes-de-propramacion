#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    float num, suma = 0, promedio;

    srand(time(NULL)); 

    printf("Los 10 numeros generados son:\n");
    for(i = 0; i < 10; i++) {
        num = 1 + rand() % 100;
        printf("%.0f ", num);
        suma += num;
    }

    promedio = suma / 10;

    printf("\nSuma: %.0f\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
