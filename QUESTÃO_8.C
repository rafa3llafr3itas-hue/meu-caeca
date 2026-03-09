#include<stdio.h>
int main(){
	float n1,n2,n3,media;
	printf("\nDigite a nota 1:");
	scanf("%f", &n1);
	printf("\nDigite a nota 3:");
	scanf("%f", &n2);
	printf("\nDigite a nota 3:");
	scanf("%f", &n3);
	
	media=(n1*2+ n2*3 + n3*5)/10;
	
	if((media>=8.01) && (media<=10)){
		printf("Media final: %.2f\nConceito A",media);
	}else if((media>=7.01) && (media<=8.0)){
		printf("Media final: %.2f\nConceito B",media);
	}else if((media>=6.01) && (media<=7.0)){
		printf("Media final: %.2f\nConceito D",media);
	}else if((media>=5.01) && (media<=6.0)){
		printf("Media final: %.2f\nConceito E",media);
	}else if(media<5.0){
		printf("Media final: %.2f\nConceito F",media);
	}
	return 0;
	
}
