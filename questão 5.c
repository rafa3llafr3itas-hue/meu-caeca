#include <stdio.h>
int main() {
    int n, i;
    long long int f1 = 1, f2 = 1, fn = 1; 
    long long int fat = 1; 

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n == 1 || n == 2) {
        fn = 1;
    } else {
        for (i = 3; i <= n; i++) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
    }
    
    for (i = 1; i <= n; i++) {
        fat = fat * i;
    }

    printf("\nO %d termo da serie de Fibonacci e: %lld", n, fn);
    printf("\nO fatorial de %d e: %lld\n", n, fat);

    return 0;
}

