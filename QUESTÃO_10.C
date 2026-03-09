#include<stdio.h>
int main(){
	int n;
	printf("\nDigite um numero: \n");
	if(scanf("%d",&n) !=1){
	printf("Entrada invalida.\n");
	return 1;
	}
	
	if(n% 2 == 0){
		printf(" %d e par.\n",n);
	}else{
		printf("%d e impar.\n",n);
	}
	
	return 0;
	
}
