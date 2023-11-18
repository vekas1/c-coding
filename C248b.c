#include<stdio.h>
main()
{
	int a,b;
	scanf("%d\n%d",&a,&b);

	if(a>b)
	{
		
		printf("%d",a-b);
	
	}
	else if(a==b)
	{
	
		printf("a is equal to b");
    }
    else
    {
    	printf("a is less than b");
	}
}
