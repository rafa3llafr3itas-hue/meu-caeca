#include<stdio.h>
int main(){
	
	float n1,n2;
	printf("\n Digite o primeiro numero: \n");
	scanf("%f", & n1);
	printf("\n Digite o segundo numero: \n");
	scanf("%f", & n2);
	
	if(n1<n2){
		printf("O menor numero e: %.2f\n",n1);
	}else if(n2>n1){
		printf("O menor numero e: %.2f\n",n2);
	}else if(n1==n2){
     	printf("Os dois numeros sao iguais: %.2f\n");	
	}
	
	return 0;
}
