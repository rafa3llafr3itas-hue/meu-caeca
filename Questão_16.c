#include<stdio.h>
int main(){
	int idade;
	
	printf("\nDigite sua idade:");
	scanf("%d", &idade);
	
	if((idade>=18) && (idade<=24)){
		printf("idade:%d\nGrupo de Risco Baixo\n",idade);
	}else if((idade>=25) && (idade<=40)){
		printf("idade:%d\nGrupo de Risco Medio\n",idade);
	}else if((idade>=41) && (idade<=70)){
		printf("idade:%d\nGrupo de Risco Alto\n",idade);;
	}else{
		printf("\nInfelizmente nao podem adquirir apolices de seguro\n");
	}
	
	return 0;
	
}
