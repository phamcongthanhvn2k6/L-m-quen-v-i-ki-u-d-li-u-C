#include <stdio.h>
#include <stdbool.h>
using namespace std;

	int main (){
		int a=5;//Kieu so nguy�n co ban, thuong c� k�ch thuoc 4 byte (32-bit).
		long long b=6;//Kieu so nguy�n rat d�i, thuong c� k�ch thuoc 8 byte (64-bit).
		float c=5.5;//Kieu so thuc don ch�nh x�c, thuong c� k�ch thuoc 4 byte.
		double d= 6.5;//kieu so thuc k�p ch�nh x�c, thuong c� k�ch thuoc 8 byte.
		char e = 'A';//Kieu k� tu, thuong c� k�ch thu?c 1 byte, luu tru c�c k� tu ASCII.
		bool f = true;//Kieu logic, luu tru c�c gi� tri 0 (false) hoac 1 (true). �e su dung kieu bool, can include thu vien <stdbool.h>.

		printf("a = %d\n", a); 
		printf("b = %d\n", b); 
		printf("c = %f\n",c); 
		printf("d = %f\n", d); 
		printf("e = %c\n", e);
		printf("f = %d\n", f);
	
	} 
	
