#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter a number to find its factorial: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d is the factorial of %d",fact,n);
	return 0;
}

