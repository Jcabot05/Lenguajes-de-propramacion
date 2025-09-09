#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    float ventas[25], suma = 0, promedio;

    srand(time(NULL));

    for(i = 0; i < 25; i++) {
        ventas[i] = 1000 + rand() % 4001; // [1000,5000]
        suma += ventas[i];
    }

    promedio = suma / 25;

    printf("Promedio de ventas: %.2f\n", promedio);
    printf("Sucursales con ventas mayores al promedio:\n");

    for(i = 0; i < 25; i++) {
        if(ventas[i] > promedio) {
            printf("Sucursal %d -> %.2f\n", i+1, ventas[i]);
        }
    }

    return 0;
}
