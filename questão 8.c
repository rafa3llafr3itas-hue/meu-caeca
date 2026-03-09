#include <stdio.h>
int main() {
    int n[4], i, j, temp;
    printf("Digite quatro numeros inteiros:\n");
    
    for (i = 0; i < 4; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (n[i] > n[j]) {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    printf("\nNumeros em ordem crescente:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", n[i]);
    }
    printf("\n\nNumeros em ordem decrescente:\n");
    for (i = 3; i >= 0; i--) {
        printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}

