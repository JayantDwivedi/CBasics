#include<stdio.h>
#include<math.h>
float calculateSD( float data[]);
int main()
{
	int i;
	float data[10];
	printf("ENter 10 elements:");
	for(i=0;i,10;++i)
	{
		scanf("%f",&data[i]);
		printf("\nstandard deviation=%.6f",calculateSD(data));
		
	} return 0;
}
	

