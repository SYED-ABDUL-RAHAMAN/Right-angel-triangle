#include<stdio.h>
#include<stdlib.h>
#define power 2
int sqr(int num)
{
	int temp=1,i;
	for(i=0;i<power;i++)
	{
		temp=temp*num;
	}
	return temp;	
}
void main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("Usage: %s <int1> <int2> <int3>\n", argv[0]);
      		return;
	}
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	if(a<0||b<0||c<0)
	{
		printf("Enter the positive numbers\n");
		return;
	}
	a=sqr(a);
	b=sqr(b);
	c=sqr(c);
	if(a+b==c)
		printf("%s %s %s is a Right Angle Triangle\n",argv[1],argv[2],argv[3]);
	else
		printf("%s %s %s is Not a Right Angle Triangle\n",argv[1],argv[2],argv[3]);
		
}
