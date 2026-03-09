#include <stdio.h>
int main() {
    int inicio, fim, i, j, Primo, cont = 0;

    printf("Digite o primeiro numero do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o ultimo numero do intervalo: ");
    scanf("%d", &fim);
    printf("\nNumeros primos no intervalo de %d a %d:\n", inicio, fim);

    for (i = inicio; i <= fim; i++) {
        if (i < 2)
            continue;
        Primo = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Primo = 0; 
                break;
            }
        }

        if (Primo) {
            printf("%d ", i);
            cont++;
        }
    }
    printf("\n\nQuantidade de numeros primos: %d\n", cont);

    return 0;
}

