# meu-caeca
# include<stdio.h>
int main(){

    int vet[6];
    printf("\n Digite 6 numeros: \n\n");
    
    for(int i=0;i<6;i++){
        scanf("%d", &vet[i]);
    }
    for(int i=0;i<6;i++){
        printf("|%d|", vet[i]);
    }
    return 0;
}
