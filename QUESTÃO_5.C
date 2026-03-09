#include<stdio.h>
int main(){
	float salario,r1,r2;
	
	printf("\n Digite seu salario atual: ");
	scanf("%f",&salario);

	if (salario<=300){
	r1= (salario*1.5);
	printf("\n Salario Ajustado: %.2f\n",r1);
	}else{
	r2= (salario*1.3);
	printf("\n Salario Ajustado: %.2f\n",r2);
	}
	
	return 0;
}
