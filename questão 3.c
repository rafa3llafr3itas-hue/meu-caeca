#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main() {
    int numeroSecreto, tentativa, opcao;

    srand(time(NULL));

    do { 

        numeroSecreto = rand() % 11; 
        printf("\n=== Jogo da Adivinhacao ===\n");
        printf("Tente adivinhar o numero entre 0 e 10!\n");

        do { 
            printf("Digite sua tentativa: ");
            scanf("%d", &tentativa);

            if (tentativa < numeroSecreto) {
                printf("O numero escolhido e MAIOR!\n");
            } else if (tentativa > numeroSecreto) {
                printf("O numero escolhido e MENOR!\n");
            } else {
                printf("\n?? Parabens! Voce acertou o numero %d!\n", numeroSecreto);
            }

        } while (tentativa != numeroSecreto); 

        printf("\nDeseja jogar novamente? (1 - Sim / 2 - Nao): ");
        scanf("%d", &opcao);

    } while (opcao == 1);

    printf("\nObrigado por jogar! Ate a proxima!\n");
    return 0;
}

