#include <stdio.h>
#include <stdbool.h>
using namespace std;

	int main (){
		int a=5;//Kieu so nguyên co ban, thuong có kích thuoc 4 byte (32-bit).
		long long b=6;//Kieu so nguyên rat dài, thuong có kích thuoc 8 byte (64-bit).
		float c=5.5;//Kieu so thuc don chính xác, thuong có kích thuoc 4 byte.
		double d= 6.5;//kieu so thuc kép chính xác, thuong có kích thuoc 8 byte.
		char e = 'A';//Kieu ký tu, thuong có kích thu?c 1 byte, luu tru các ký tu ASCII.
		bool f = true;//Kieu logic, luu tru các giá tri 0 (false) hoac 1 (true). Ðe su dung kieu bool, can include thu vien <stdbool.h>.

		printf("a = %d\n", a); 
		printf("b = %d\n", b); 
		printf("c = %f\n",c); 
		printf("d = %f\n", d); 
		printf("e = %c\n", e);
		printf("f = %d\n", f);
	
	} 
	
