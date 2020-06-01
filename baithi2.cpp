#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char kytu[100];
	
	printf ("nhap chuoi ki tu: ");
	gets (kytu);
	
	strlwr(kytu);
	printf ("chuoi li tu moi la:%s ",kytu);
	return 0;
}
