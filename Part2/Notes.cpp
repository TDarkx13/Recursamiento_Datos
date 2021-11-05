#include <stdio.h>

int main()
{
	int n1,n2,n3;
	float avg;

	printf("Enter three notes:");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	avg=(n1+n2+n3)/3;
	printf("\nAverage: %0.2f",avg);
	
	return(0);
}
