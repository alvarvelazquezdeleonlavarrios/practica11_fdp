#include<stdio.h>
#include<conio.h>

//Prog23. Matríz x Escalar

int Matriz[3][3],Escalar,a,b,r[3][3],*ap1,*ap2,*ap3,*ap4,*ap5;

main(){
	ap4 = &Escalar;

	for(a=1;a<3;a++){
		ap1 = &a;
		for(b=1;b<3;b++){
			ap2 = &b;
			printf("Ingrese elemento Matriz[%d,%d]: ",*ap1,*ap2);
			scanf("%d",&Matriz[*ap1][*ap2]);
		}
	}
	
	printf("\nIntroduzca valor escalar: ");
	scanf("%d",&(*ap4));
	
	printf("\n");
	for(a=1;a<3;a++){
		ap1 = &a;
		r[*ap1][1]=Matriz[*ap1][1]*(*ap4);
		r[*ap1][2]=Matriz[*ap1][2]*(*ap4);
	}
	
	ap5 = &r[1][1];
	printf("r[1,1] = %d\n",*(ap5));
	printf("r[1,2] = %d\n",*(ap5+1));
	printf("r[2,1] = %d\n",*(ap5+3));
	printf("r[2,2] = %d\n",*(ap5+4));
	
	
	getch();
}
