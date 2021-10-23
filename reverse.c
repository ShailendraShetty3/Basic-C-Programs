#include <stdio.h>
#include <string.h>
 
void main()
{
	int i,n,j;
	char str[50],rev[50];
	printf("enetr the string\n");
	scanf("%s",str);
	
	n=strlen(str);
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		rev[i]=str[j];
	}
	printf("reverse of the string is %s \n",rev);
	printf("length of the string is %d \n",n);
}
