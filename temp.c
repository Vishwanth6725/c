#include<stdio.h>

int main()
{
	int a =5;
	int i;
	while(a > 0)
	{
		printf("%d ", a % 2);
		a=a/2;

	}
	return 0;
}
