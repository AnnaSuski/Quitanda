# include <stdio.h>
# include <stdlib.h>
int main(){
	int q1,q2,q3,q4;
	float vpera,vabacaxi,vbanana,vmaca,r1,r2,r3,r4,totalfinal;
	printf("Informe o valor da pera: ");
	scanf("%f", &vpera);
		printf("Informe o valor da maca: ");
	scanf("%f", &vmaca);
		printf("Informe o valor da banana: ");
	scanf("%f", &vbanana);
			printf("Informe o valor do abacaxi: ");
	scanf("%f", &vabacaxi);
			printf("Informe quantos abacaxis foram comprados: ");
	scanf("%d", &q1);
		printf("Informe quantas peras foram compradas: ");
	scanf("%d", &q2);
	printf("Informe quantas bananas foram compradas: ");
	scanf("%d", &q3);
	printf("Informe quantas macas foram compradas: ");
	scanf("%d", &q4);
	r1=vpera*q1;
	r2=vbanana*q2;
	r3=vmaca*q3;
	r4=vabacaxi*q4;
	totalfinal=q1+q2+q3+q4;
	printf(" O valor da pera ficou %f \n O valor da banana %f \n O valor da maca %f \n O valor do abacaxi %f \ntotalizando %f", r1,r2,r3,r4,totalfinal);
	getch();
}
