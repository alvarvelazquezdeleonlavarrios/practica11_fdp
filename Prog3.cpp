#include<stdio.h>
#include<conio.h>

//Prog30. Gastos con Apuntadores

const char *mes[14] = {" ","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
int cont, m[14],*ap1,*ap4;
float r,s=0,*ap2,*ap3;

main(){
	for(cont=1;cont<13;cont++){
		ap1 = &cont;
		printf("Gastos del mes de %s: $",mes[*ap1]);
		scanf("%d",&m[*ap1]);
		s=s+m[*ap1];
	}
	ap2 = &s;
	ap3 = &r;
	ap4 = &m[0];
	*ap3=*ap2/12;
	printf("\nGastos del mes de %s = $%d",mes[6],*(ap4+6));
	printf("\nGastos del mes de %s = $%d",mes[12],*(ap4+12));
	printf("\nPromedio Anual = $%f",*ap3);
	
	getch();
}
