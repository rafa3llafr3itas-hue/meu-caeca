#include<stdio.h>
int main(){
	int idade;
	printf("\nDigite sua idade:");
	scanf("%d", &idade);
	
	if((idade>=0) && (idade<=2)){
		printf("idade:%d\nRecem Nascido\n",idade);
	}else if((idade>=3) && (idade<=11)){
		printf("idade:%d\nCrianca 1\n",idade);
	}else if((idade>=12) && (idade<=19)){
		printf("idade:%d\nAdolescente\n",idade);
	}else if((idade>=20) && (idade<=55)){
		printf("idade:%d\nAdulto\n",idade);
	}else if(idade>55){
		printf("idade:%d\nIdoso\n",idade);
	}
	
	return 0;
	
}
