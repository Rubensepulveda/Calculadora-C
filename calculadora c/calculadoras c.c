#include <stdio.h>
//calculadora basica
//invocamos los metodos creados
void add ();
void sub ();
void mul ();
void div ();
void sqr ();
void sel_func (in);
//inicio del programa
int main (void)
{
        int s; //esta variable es para elegir las opciones del menu
    
        Input:
           printf("opciones [ SUMA(1), RESTA(2), MULTIPLICACION(3), DIVISION(4), ELEVAR AL CUADRADO(5)] : "); //declaramos las opciones del menu
           scanf("%d",&s);
         
           if (s > 5 | s < 1)//hacemos un cilo if para poder crear el sistema de seleccion del meni
		   {
                  printf("Vuelva a ingresar Valor\n");//si no se escoge alguna de las opciones se hace esta excepcion
                  goto Input;
           }
           sel_func (s);
    
           goto Input;
}

void sel_func (int s)
{       //creamos una sentencia switch para que se puedan esoger multiples opciones
        void (*fptr)(void);
        switch (s){
        case 1:
                fptr = add;
                break;
        case 2:
                fptr = sub;
                break;
        case 3:
                fptr = mul;
                break;
        case 4:
                fptr = div;
                break;
        case 5:
                fptr = sqr;
                break;  
        }
    
        fptr();
}

void add () //suma
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a + b);
}

void sub ()//resta
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n" , a - b);
}

void mul () //mutiplicacion
{
        int a, b;
      
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a * b);
}

void div ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a / b);
}

void sqr (){
        int exp, base, i;
        int result = 1;
    
        printf("Input base : ");
        scanf("%d",&base);
        printf("Input exp : ");
        scanf("%d",&exp);
    
        for (i = 0; i < exp; ++i)
                result *= base;
            
        printf("%d^%d = %d\n",
                    base,exp,result);
}
