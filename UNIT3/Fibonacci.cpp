#include <stdio.h>

int fibonacci (int numero);

int main ()
{
  int r, valor;
  
  printf ("0");
  printf ("\n1");
  printf ("\n1");
  for (valor = 1; valor <= 20; valor++)
  {
    r = fibonacci (valor);
    printf ("\n%d", r);
  }
}

int fibonacci (int numero)
{
  if ((numero == 0) || (numero == -1)) 
    return 1;
  else
    return fibonacci (numero - 1) + fibonacci (numero - 2);
}

