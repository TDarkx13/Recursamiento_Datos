#include<stdio.h>

int main()
{
	int i;
	printf("Pairs numbers between 1 to 100:\n");
	for (i = 1; i <= 100; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
	return (0);
}
