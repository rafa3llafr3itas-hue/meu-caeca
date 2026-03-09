#include <stdio.h>
int main() {
    int num, cont = 0, soma = 0;
    int maior, menor;
    float media;

    printf("Digite numeros (digite 0 para encerrar):\n");
    scanf("%d", &num);

    if (num == 0) {
        printf("Nenhum numero foi digitado.\n");
        return 0; 
    }
    
    maior = menor = num;
    
    while (num != 0) {
        soma += num;
        cont++;

        if (num > maior) maior = num;
        if (num < menor) menor = num;

        scanf("%d", &num); 
    }

    media = (float)soma / cont;

    printf("\nQuantidade de numeros digitados: %d", cont);
    printf("\nSomatorio dos numeros: %d", soma);
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\nMedia aritmetica: %.2f\n", media);

    return 0;
}

