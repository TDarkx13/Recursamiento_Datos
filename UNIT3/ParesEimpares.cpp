#include<stdio.h>

int Par(int lm, int upl);
int Impar(int lm, int upl);

int main()
{
	int lm, upl, i, op;
	
	do{
	printf("\nEscoge una opcion\n1.-Numeros Pares\n2.-Numeros Impares\n3.-Salir\n");
	scanf("%d", &op);
	if (op == 3)
	break;
	else
	printf("Lower limit: ");
	scanf("%d", &lm);
	printf("Upper limit: " );
	scanf("%d", &upl);
	if (op==1)
	Par(lm, upl);
	if(op==2)
	Impar(lm, upl);
	}while(op != 3);
    return 0;
}

	int Par(int lm, int upl)
{
    int i;
    for(i=lm; i<=upl; i++){
        if(i%2==0)
        {
            printf("%d ", i);
        }
    }
}
int Impar(int lm, int upl)
{
    int i;
    for(i=lm; i<=upl; i++){
        if(i%2!=0)
        {
            printf("%d ", i);
        }
    }
}
