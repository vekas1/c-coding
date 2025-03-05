#include<stdio.h>
#include<string.h>

struct student 
{
	int rollno;
	int age;
	
};
void fun(struct student s1);

main()
{
	struct student s1={25,20};
	fun(s1);
	
	}
	
void fun(struct student s4)
{
	print ("%d\n",s4.rollno);
	print ("%d\n",s4.age);
}



