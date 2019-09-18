#include<stdio.h>
int main()
{
	int arr[100],p=0,ne=0,i,n;
	printf("\nEnter the size of array:::");
	scanf("%d",&n);
	printf("\nEnter the elements::\n");
	for(i=0;i<n;i++)
	{
		scanf("\t%d",&arr[i]);
		if(arr[i]>0)
		p++;
		else 
		ne++;
	}
	printf("\ntotal positive no.s are::%d\ntotal negative no.s are::%d",p,ne);
}
