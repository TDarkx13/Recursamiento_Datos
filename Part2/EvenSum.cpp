#include<stdio.h>

int main()
{
	int i, sum;

	sum=0;
	
	for(i=1; i<100; i++)
	
	if(i%2 == 0)
	sum=sum+i;
	printf("Sum of all even numbers between 1 and 100 is %d\n", sum);
	
	return(0);
}
