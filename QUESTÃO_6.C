#include<stdio.h>
int main(){
	int sexo;
	float altura,peso;
	
	printf("\nDigite sua altura: \n");
	scanf("%f", &altura);
	printf("\nSelecione o sexo:\n1-Feminino \n2-Masculino\n");
	scanf("%d", &sexo);
	
	if (sexo==1){
		peso=((62.1*altura)-44.7);
		printf("\nSeu peso ideal:%.1f\n",peso);
	}else if (sexo==2){
		peso=((72.7*altura)-58);
		printf("\nSeu peso ideal:%.1f\n",peso);
	}else{
		printf("\n Sexo Invalido");
	}
	
	return 0;
}
