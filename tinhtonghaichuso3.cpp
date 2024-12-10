#include <stdio.h>

int main(){
	int a,chuvi,dientich;	
	printf (" nhap canh hinh vuong ");
	scanf ("%d", &a);
	
	chuvi  = a * 4;
	dientich = a * a; 
	
	printf (" Chu vi cua hinh vuong co canh %d la: %d\n", a,chuvi);
	printf (" Dien tich cua hinh vuong co canh %d la: %d\n",a,dientich); 
	
	return 0; 
} 
