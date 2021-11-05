#include<stdio.h>

int main()
{
	int tmp;

    printf("Input the temperature: ");
    scanf("%d",&tmp);
    
   if(tmp<17)
			printf("Cold.\n");
   else if(tmp<27)
   			printf("Medium.\n");
                else
                    printf("Heat.\n");
    
    return(0);
}
