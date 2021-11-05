#include<stdio.h>

int main()
{

	int num1, num2;
	printf("Input the two numbers: \n");
	scanf("%d %d", &num1, &num2);
	
	if(num1>num2) 
	printf("%d is the biggest", num1);
	else
	printf("%d is the biggest", num2);
	
	return (0);
}
