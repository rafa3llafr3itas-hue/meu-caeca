#include<stdio.h>
int main(){
	int i;
	
	for (i = 0; i<10;i++){
		printf("%d", i);
		if(i<9){
			printf("-");
		}
	}
	printf("\n\n");
	for (i=0;i<10;i++){
		printf("%d",i);
		if(i==4){
			printf("\n");
		}
	}
	return 0;
}
