#include<stdio.h>
int main()
{
	int a[20];
	int i,n,sum=0;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\nThe sum of array is %d",sum);
	return 0;
}
