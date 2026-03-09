#include<stdio.h>
int main(){
	float salario,reajuste,novosalario;
	
	printf("\n Digite seu salario atual: ");
	scanf("%f",&salario);

	if (salario<=500){
	reajuste=salario*0.3;
	novosalario=reajuste+salario;
	printf("\n Funcionario com direito ao reajuste!!! \n");	
	printf("\n Salario Antigo: %.2f\n",salario);
	printf("\n Reajuste: %.2f\n",reajuste);	
	printf("\n Novo Salario: %.2f\n",novosalario);
	}else {
	printf("\n Funcionario sem direito ao reajuste!!! \n");	
	printf("\n Salario: %.2f\n",salario);
	}
	
	return 0;
}
