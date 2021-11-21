#include<stdio.h>
void reverse_without_temp(int a,int b);
void reverse_with_temp(int a,int b);
void main()
{
	int a,b;
	printf("enter the 2 number\n");
	scanf("%d%d",&a,&b);
	reverse_without_temp(a,b);
	reverse_with_temp(a,b);

}

void reverse_without_temp(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping the numbers without using third variable are %d\t %d \n",a,b);
}

void reverse_with_temp(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swaping the numbers using third variable are %d\t %d \n",a,b);
}
