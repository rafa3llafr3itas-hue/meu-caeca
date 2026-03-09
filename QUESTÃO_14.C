#include<stdio.h>
int main(){
	int cargo;
	
	printf("\nSelecione o seu cargo:\n1-Escrituario \n2-secretario \n3-Caixa \n4-Gerente \n5- Diretor\nDigite:");
	scanf("%d", &cargo);
	
	if (cargo==1){
		printf("\nSeu aumento sera:50%%\n");
	}else if (cargo==2){
		printf("\nSeu aumento sera:35%%\n");
	}else if (cargo==3){
		printf("\nSeu aumento sera:20%%\n");
	}else if(cargo==4){
		printf("\nSeu aumento sera:10%%\n");
	}else if(cargo==5){
		printf("\nNao tem direito a aumento");
	}	
	return 0;
}
