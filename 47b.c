#include <stdio.h>
int main()
{
	int num1=16;
	int num2;
	int sun=0; int div; int mul;
	num2 = 61;	
	mul = num1 * num2;
	sun = num1 - num2;
	printf("%d * %d = %d",num1 ,num2 ,mul);
	printf("%d - %d = %d",num1 ,num2 ,sun);
	
	return 0;
}