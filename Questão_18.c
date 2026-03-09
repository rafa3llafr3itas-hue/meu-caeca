#include<stdio.h>
int main (){
	float horasextrasm, horasfaltasm, horasextrash, horasfaltash,h,h_horas;
	printf("\nDigite as horas extras em min:");
	scanf("%f",&horasextrasm);
	printf("\nDigite as horas faltas em min:");
	scanf("%f",&horasfaltasm);
	
	horasextrash = (horasextrasm)/60.0;
	horasfaltash = (horasfaltasm)/60.0;
	h = horasextrasm - (2.0/3.0 * horasfaltasm);
	h_horas = h/60.0;
	
	if(h>2400){
		printf("\nhoras extras: %.2f (h)\n", horasextrash);
        printf("\nhoras faltas: %.2f (h)\n", horasfaltash);
        printf("\nh: %.2f (min) ou %.2f (h)\n", h,h_horas);
        printf("\nPremio: R$500\n");
	}else if((h>=1801)&& (h<=2400)){
		printf("\nhoras extras: %.2f (h)\n", horasextrash);
        printf("\nhoras faltas: %.2f (h)\n", horasfaltash);
        printf("\nh: %.2f (min) ou %.2f (h)\n", h,h_horas);
        printf("\nPremio: R$400\n");
    }else if((h>=1201)&& (h<=1800)){
		printf("\nhoras extras: %.2f (h)\n", horasextrash);
        printf("\nhoras faltas: %.2f (h)\n", horasfaltash);
        printf("\nh: %.2f (min) ou %.2f (h)\n", h,h_horas);
        printf("\nPremio: R$300\n");
    }else if ((h>=600)&& (h<=1200)){
		printf("\nhoras extras: %.2f (h)\n", horasextrash);
        printf("\nhoras faltas: %.2f (h)\n", horasfaltash);
        printf("\nh: %.2f (min) ou %.2f (h)\n", h,h_horas);
        printf("\nPremio: R$200\n");
    }else if (h<600){
		printf("\nhoras extras: %.2f (h)\n", horasextrash);
        printf("\nhoras faltas: %.2f (h)\n", horasfaltash);
        printf("\nh: %.2f (min) ou %.2f (h)\n", h,h_horas);
        printf("\nPremio: R$100\n");
    }
	return 0;
}
