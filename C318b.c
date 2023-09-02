//write a program to print a fibanaki serious using a for loop
#include<stdio.h>
main()
{
	int i1=0,i2=1,s,t;
	scanf("%d",&t);
	for(i1,i2;s=i1+i2;i1=i2,i2=s)
	
	{
		if(s>t)
		break;
		printf("%d\n",s);
	}
}
