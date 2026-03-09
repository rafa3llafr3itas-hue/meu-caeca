#include<stdio.h>
#include<math.h>
int main(){
	int op;
	float num1,num2,res;
	
	printf("\nMenu: \n1-Soma \n2-Raiz Quadrada \n3-Sair \nDigite:");
	scanf("%d",&op);
	
	if (op==1){
		printf("\nDigite um numero: \n");
		scanf("%f",&num1);
		printf("\nDigite outro numero: \n");
		scanf("%f",&num2);
		res=num1+num2;
		printf("\n %.2f+ %.2f= %.2f\n",num1,num2,res);
	}else if (op==2){
		printf("\nDigite um numero: \n");
		scanf("%f",&num1);
		res= sqrt(num1);
		printf("\nRaiz de %.0f:%.2f\n",num1,res);
	}else{
		printf("\nObrigado por participar\n");
	}
	return 0;
}
