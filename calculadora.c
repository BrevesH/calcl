#include <stdio.h>
#include <math.h>
void main ()

{
float num1, num2, resultado, resultado2;
     printf("digite um valor");
     scanf("%f", &num1);

     printf("digite um valor");
     scanf("%f", &num2);


     resultado = num1 * num2;
     resultado2 = num1/num2;

    

     printf("%f", resultado);
     printf("%f", resultado2);
     printf("%f", power(num1, num2));


}