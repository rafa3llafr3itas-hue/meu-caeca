#include<stdio.h>
#include<string.h>
int main(){
	char senha [20];
	printf("\n Digite um nome:  ");
	gets(senha);
	
	if(!strcmp(senha,"ASDFG")){
		printf("\n Senha correta!!!\n");
	}else{
		printf("\n Erro !!!\n");
	}
	return 0 ;
}
