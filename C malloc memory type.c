#include<stdio.h>
#include<stdlib.h>

main()
{
	int *p, n,i;
	n=5;

	p=(int *)malloc(n*(sizeof (int)));
	if(p==NULL)
	{
		printf("not efficient memory");
		exit(1);
		
	}
	else
	{
		printf("enter values to be done by DMA");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			printf("\n%d",*p+i);
		}
	}
	
	
}
