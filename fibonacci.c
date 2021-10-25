#include<stdio.h>
void main()
{
	int num,a=0,b=1,c;
	printf("Enter the number of fibbonacci series to be displayed\n");
	scanf("%d",&num);
	if(num>=1)
	{
		printf("%d\n%d\n",a,b);
	}
	for(int i=0;i<num;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
