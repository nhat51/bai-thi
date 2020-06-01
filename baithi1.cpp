#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,sum=0,t,rm;
	printf ("nhap numbers: ");
	scanf ("%d",&num);
	t=num;
	 while (t != 0)
	 {
	 	rm =t%10;
	 	sum=sum+rm;
	 	t=t/10;
	 }
	 printf ("sum is %d",sum);
	return 0;
}
