#include<stdio.h>
main()
{
int a[20];
int i;
printf("enter the elements\n");
for(i=0;i<6;i++)
{
	scanf("%d",&a[i]);
	
}	
printf("the number is:%d",a[2]);
int key;
key=2;
int loc;
for (i=0;i<6;i++)
{
	if(a[i]==key)
	{
		printf("\nthe index value is %d and its position is %d",i,i+1);
	                         
	}
	
	
}
    

	
}
