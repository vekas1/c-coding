#include<stdio.h>

int add(int);
main()
{
	int n;
	printf("entre a number:");
	scanf("%d",&n);
	printf("sum of n is %d",add(n));
	
}
int add(int n)
{
	if (n==0)
	return 0;
	else
	return n+add(n-1);
	
	
}
