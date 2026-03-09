#include<stdio.h>
int main (){
	float sal_min,dependentes,horas_trabalhadas,horas_extras,sal_bruto,valor_he,valor_d,sal_mes,valor_ht,irrf, sal_liq, gratificacao, sal_receber;
	
	printf("\nDigite o salario minimo:");
	scanf("%f",&sal_min);
	printf("\nDigite a quantidade de dependentes:");
	scanf("%f",&dependentes);
	printf("\nDigite as horas trabalhadas:");
	scanf("%f",&horas_trabalhadas);
	printf("\nDigite as horas extras:");
	scanf("%f",&horas_extras);
	
	valor_ht = sal_min/220.0;
	sal_mes = sal_min + (sal_min * 1.0/5.0);
	valor_d = dependentes*32.0;
	valor_he= valor_ht*horas_extras*1.5;
	sal_bruto =sal_mes+valor_d+valor_he;

	if (sal_bruto<200){
		irrf = 0.0;
	}else if ((sal_bruto>=200)&&(sal_bruto<=500)){
		irrf = sal_bruto*0.10;
	}else if (sal_bruto>500){
		irrf = sal_bruto*0.20;
	}
	
	sal_liq = sal_bruto - irrf;	

	if (sal_liq<=350){
		gratificacao = 100.0;
	}else if (sal_liq>350){
		gratificacao = 50.0;
	}
	
	sal_receber = sal_liq + gratificacao;
	
	printf("\nDetalhamento do salario: \n");
	printf("\nSalario Bruto: R$%.2f\n",sal_bruto);
	printf("\nValor do IRRF: R$%.2f\n",irrf);
	printf("\nSalario Liquido: R$%.2f\n",sal_liq);
	printf("\nGratificacao: R$%.2f\n",gratificacao);
	printf("\nSalario a receber: R$%.2f\n",sal_receber);
	
	return 0;
}
