#include<stdio.h>
#include<conio.h>

int main()
{
	float hasil,p1,pe1,p2,pe2;
	printf("program menghitung bilangan pecahan\n");
	printf("\nmasukan nilai penyebut 1 :");
	scanf("%f",&p1);
	printf("\n masukan nilai pembilang 1 :");
	scanf("%f",&pe1);
	printf("\nmasukan nilai penyebut 2 :");
	scanf("%f",&p2);
	printf("masukan nilai pembilang 2 :");
	scanf("%f",&pe2);
	hasil=(pe2*p2/p1*pe1);
	printf("\n hasilnya adalah : %.2f\n",hasil);
	getch();
}
