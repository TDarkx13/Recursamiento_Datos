#include<stdio.h>
#include<conio.h>
 
int menu();
void leeOperadores(int *a,int *b);
int suma(int a, int b);
int resta(int a, int b);
void multiplicacion(int a, int b, float*resultado);
float division(int a, int b);


int menu(){
    int opcion;
    printf( "Elige una opcion:\n"
			"1.Suma\n"
            "2.Resta\n"
            "3.Multiplicacion\n"
            "4.Division\n"
            "0.Salir del programa\n"
           );
    scanf("%d",&opcion);
    return(opcion);
}

void leeOperadores(int *a,int *b){
    printf("Ingrese el valor de a:\n");
    scanf("%d",a); 
    printf("Ingrese el valor de b:\n");
    scanf("%d",b);
}

int suma(int a, int b){
    int suma;
    suma=a+b;
    return(suma);
}

int resta(int a, int b){
    int resta;
    resta=a-b;
    return(resta);
}

void multiplicacion(int a, int b, float *resultado){
    *resultado=a*b;
}

float division(int a, int b){
    float division;
    division=(float)a/b;
    return(division);
}


int main(void){
   
    float resultado,d,p;
    int v,s,r,a,b;
    v=menu(); 
    
    while(v!=0){
        switch(v){
            case 1 :{
                leeOperadores(&a,&b);
                s=suma(a,b);
                printf("%d+%d=%d\n\n",a,b,s);
                v=menu();
            } 
            case 2 :{
                leeOperadores(&a,&b); 
                r=resta(a,b);
                printf("%d-%d=%d\n",a,b,r);
                v=menu();
            }
            case 3 :{
                leeOperadores(&a,&b); 
                multiplicacion(a,b,&resultado);
                printf("%d*%d=%f\n",a,b,resultado);
                v=menu();
            }
            case 4 :{
                leeOperadores(&a,&b); 
                d=division(a,b);
                printf("%d:%d=%f\n",a,b,d);
                v=menu();
            }
            
            default :
                printf("Opcion incorrecta\n");
                v=menu();
        }
    }
    printf("Nos vemos");
}
