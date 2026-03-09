#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,delta,x1,x2;
	printf("\nDigite sua variavel coeficiente de x ao quadrado:");
	scanf("%lf",&a);
	printf("\nDigite sua variavel o coeficiente de x:");
	scanf("%lf",&b);
	printf("\nDigite o termo independente:");
	scanf("%lf",&c);
	
	delta=(b*b)-4*a*c;
	
	if(delta<0){
		printf("\nAequação não possui raizes reais(Delta<0).\n");
	}else if (delta ==0){
		x1 = -b /(2*a);
		printf("\nA equacao possui uma unica raiz real(Delta=0).\n");
		printf("\nRaiz: x = %.4lf\n",x1);
	}else{
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("\nA equacao possui duas raizes reias (Delta>0).\n");
		printf("\nRaiz 1: x1 = %.1lf\n",x1);
		printf("\nRaiz 1: x2 = %.1lf\n",x2);
	}
	return 0;
	
}

  
