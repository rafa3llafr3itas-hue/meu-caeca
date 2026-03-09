#include<stdio.h>
int main(){
	float n1,n2,n3,media;
	printf("\nDigite a nota 1:");
	scanf("%f", &n1);
	printf("\nDigite a nota 3:");
	scanf("%f", &n2);
	printf("\nDigite a nota 3:");
	scanf("%f", &n3);
	
	media=(n1+n2+n3)/3;
	
	if(media<7){
		printf("Media final: %.2f\nReprovado!!!",media);
	}else if(media>=7){
		printf("Media final: %.2f\nAprovado!!!",media);
	}
	return 0;	
}
