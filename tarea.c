#include <stdio.h>

int main() {
    float promedios[4], suma_total = 0;

    for (int i = 0; i < 4; i++) {
        int n;
        float dato, suma = 0;

        printf("\n¿Cuántos datos para la RAE %d?: ", i + 1);
        scanf("%d", &n);

        for (int j = 1; j <= n; j++) {
            printf("Dato %d: ", j);
            scanf("%f", &dato);
            suma += dato;
        }

        promedios[i] = suma / n;
        suma_total += promedios[i];
    }

    printf("\nRESULTADOS ");
    printf("\nPromedio RAE 1: %.2f", promedios[0]);
    printf("\nPromedio RAE 2: %.2f", promedios[1]);
    printf("\nPromedio RAE 3: %.2f", promedios[2]);
    printf("\nPromedio RAE 4: %.2f", promedios[3]);
    printf("\nPromedio Final: %.2f\n", suma_total / 4.0);

    return 0;
}