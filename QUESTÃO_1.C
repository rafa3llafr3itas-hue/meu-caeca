#include<stdio.h>
int main(){
	float n1,n2,n3,n4,media;
	
	printf("\n Nota 1: ");
	scanf("%f",&n1);
	printf("\n Nota 2: ");
	scanf("%f",&n2);
	printf("\n Nota 3: ");
	scanf("%f",&n3);
	printf("\n Nota 4: ");
	scanf("%f",&n4);
	
	media=(n1+n2+n3+n4)/4;
	
	if (media>= 7.0){
	printf("\n Aluno Aprovado!!! \nMedia: %.2f\n",media);
	}else{
	printf("\n Aluno Reprovado!!! \nMedia: %.2f\n",media);
	}
	
	return 0;
}
