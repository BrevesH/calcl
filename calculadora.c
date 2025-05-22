#include <stdio.h>
#include <math.h>
void main ()
{

    float valor1, valor2;
    float resultadoSoma, resultadoSub, resultadoMult, resultadoDiv;



    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    
    resultadoSoma = valor1 + valor2;
    resultadoSub = valor1 - valor2;
    resultadoMult = valor1 * valor2;
    resultadoDiv = valor1 / valor2;
    if (valor2 == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return;
    

    

    


    printf("A soma de %f e %f é: %f\n", valor1, valor2, resultadoSoma);
    printf("A subtração de %f e %f é: %f\n", valor1, valor2, resultadoSub);
    printf("A multiplicação de %f e %f é: %f\n", valor1, valor2, resultadoMult);   
    printf("A divisão de %f e %f é: %f\n", valor1, valor2, resultadoDiv);  


    printf("A raiz quadrada de %d é: %.2f\n", valor1, sqrt(valor1));
    printf("A raiz quadrada de %d é: %.2f\n", valor2, sqrt(valor2));


}




