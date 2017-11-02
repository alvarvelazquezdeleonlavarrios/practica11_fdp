#include<stdio.h>
#include<conio.h>

//Prog22. Suma de Matrices

int tablaA[3][3],a,b,tablaB[3][3],c,d,tablaC[3][3],*ap1,*ap2,*ap3,*ap4,*ap5;

main(){
	for(a=1;a<3;a++){
		ap1 = &a;
		for(b=1;b<3;b++){
			ap2 = &b;
			printf("Ingresar elemento TablaA[%d,%d]: ",*ap1,*ap2);
			scanf("%d",&tablaA[*ap1][*ap2]);
		}
	}
	printf("\n");	
	for(c=1;c<3;c++){
		ap3 = &c;
		for(d=1;d<3;d++){
			ap4 = &d;
			printf("Ingresar elemento TablaB[%d,%d]: ",*ap3,*ap4);
			scanf("%d",&tablaB[*ap3][*ap4]);
		}
	}
	
	printf("\n");
	for(a=1;a<3;a++){
		ap1 = &a;
		tablaC[*ap1][1]=tablaA[*ap1][1]+tablaB[*ap1][1];
		tablaC[*ap1][2]=tablaA[*ap1][2]+tablaB[*ap1][2];
	}
	
	ap5 = &tablaC[1][1];
	printf("TablaC[1,1] = %d\n",*(ap5));
	printf("TablaC[1,2] = %d\n",*(ap5+1));
	printf("TablaC[2,1] = %d\n",*(ap5+3));
	printf("TablaC[2,2] = %d\n",*(ap5+4));
	
	getch();
}
