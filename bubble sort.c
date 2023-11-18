#include<stdio.h>
void function();
int main()
{
 function();
 function();
 function();
 return 0;
}
void function()
{
 int a=10;
 static int b=10;
 printf("\n Value of a:%d, Value of b:%d",a,b);
 a++;
 b++;
}

	

