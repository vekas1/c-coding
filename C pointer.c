#include<stdio.h>
main()
{
	int a;
	int *ptr= &a;
	scanf("%d",&a);
	*ptr=69;
	scanf("%d",ptr);
	
	
	printf("%d,%d",*ptr,a);
	printf("\n");
	printf("%u,%u,%u",&ptr,&a,&*ptr);
	
}
