#include<stdio.h>
#include<string.h>
void palindrome();
void main()
{
	
	palindrome();
	
	
}

void palindrome()
{
	char str[25];
	int n,flag=0;
	printf("enter the string to be reversed\n");
	scanf("%s",str);
	n=strlen(str);
	for(int i=0,j=n-1;i<=n/2,j>=n/2;i++,j--)
	{
		if(str[i]==str[j])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("entered string is palindrome \n");
	}
	else
	{
		printf("entered string is not a palindrome \n");
	}
	
}

