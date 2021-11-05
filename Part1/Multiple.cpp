#include<stdio.h>

int main()
{
	int num1, num2;
	printf("First number: \n");
	scanf("%d", &num1);
	
	printf("Second number: \n");
	scanf("%d", &num2);
	
	if(num2 % num1 == 0){
    printf("The second number is a multiple of the first number");
  }
  
  return 0;
}
