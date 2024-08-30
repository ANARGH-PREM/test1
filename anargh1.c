#include<stdio.h>
void swap(int n1,int n2)
{
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("first number after swap:%d\n",n1);
	printf("second number after swap:%d",n2);
}
main()
{
	int a,b;
	printf("enter the first number: ");
	scanf("%d",&a);
	printf("enter the second number: ");
	scanf("%d",&b);
	swap(a,b);
}

