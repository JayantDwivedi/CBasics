#include<stdio.h>
int main()
{
	int a,i,n,ar1[100],ar2[100];
	printf("\nEnter size of array:");
	scanf("%d",&n);
	printf("\nEnter the elements of array.....");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar1[i]);
	}
    for(i=0;i<n;i++)
    {
    	a=ar1[i];
    	ar1[i]=ar2[i];
    	ar2[i]=a;
	}
    for(i=0;i<n;i++)
    {
    	printf("%d",ar2[i]);
	}
}


