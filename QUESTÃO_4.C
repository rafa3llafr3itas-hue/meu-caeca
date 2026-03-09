#include<stdio.h>
int main(){
	int idade;
	
	printf("\nDigite sua idade: \n");
	scanf("%d", &idade);
	
	if(idade>=18){
		printf("\nMaior de idade !!!\n");
	}else{
		printf("\nMenor de idade !!!\n");
	}
	
	return 0;
	
}
