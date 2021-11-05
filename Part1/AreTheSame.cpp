#include<stdio.h>

int main()
{
    int num1, num2;
 
    printf("Input the number1 and the number2: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 == num2)
        printf("The numbers are the same\n");
    else
        printf("The numbers are not the same\n");
	
	return(0);
}
