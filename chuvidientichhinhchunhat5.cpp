#include <stdio.h>

int main(){
	int a,b,chuvi,dientich;	
	printf (" nhap canh thu nhat ");
	scanf ("%d", &a);
	printf ("nhap canh thu hai ");
	scanf ("%d", &b);
	 
	chuvi  = ( a+ b ) * 2;
	dientich = a * b; 
	
	printf (" Chu vi cua hinh chu nhat co canh thu nhat %d va canh thu hai %d la: %d\n", a,b,chuvi);
	printf (" Dien tich cua hinh chu nhat co canh thu nhat %d va canh thu hai %d la: %d\n",a,b,dientich); 
	
	return 0; 
} 
