#include<stdio.h>
int main()
{
	int arr[100],n,i;
	printf("\nEnter the size of array::");
	scanf("%d",&n);
	printf("\nEnter the elements:::\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nrevese array is:::\n");
	for(i=n-1;i>=0;i--)
	{
		printf("\t%d",arr[i]);
	}
}
