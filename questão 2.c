#include<stdio.h>
int main(){
	int i,cont = 0,op;
	float sm=0;
	printf("\nDigite uma opcao:\n1-Numeros pares\n2-Numeros impares\n3-Multiplos de 5\nDigite: ");
	scanf("%d", &op);
	
	switch(op){
		case 1:
		printf("\nPares\n");
		for(i=1;i<=100;i++){
			if(i%2==0){
				printf("%d ",i);
			}
		}
		break;
		case 2:
		printf("\nImpares\n");
		for(i=1;i<=100;i++){
			if(i%2!=0){
				printf("%d ",i);
			}
		}
		break;
		case 3:
		printf("\n\nDivisiveis por 5\n");
		for(i=1;i<=100;i++){
			if(i%5==0){
				printf("%d ",i);
				sm=sm+i;
				cont++;
			}
		}
		printf("\n\nQuantidade de numeros dividiveis por 5: %d\n",cont);
		printf("\n\nMedia de numeros divisiveis por 5: %.2f\n",sm/cont);
		break;
		default:
		printf("\n Opcao invalida!!!\n");
		break;
	}
	
	return 0;
}
