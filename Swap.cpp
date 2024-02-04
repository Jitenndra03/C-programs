#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("After swapping the first number a is: %d\n",a);
	printf("After swapping the second number b is: %d\n",b);
	return 0;
}
