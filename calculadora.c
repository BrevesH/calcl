#include <stdio.h>

void main()
{

    int valor1, valor2, resultado;
    float resultadoSoma, resultadoSub, resultadoMult, resultadoDiv;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    resultadoSoma = valor1 + valor2;
    resultadoSub = valor1 - valor2;
    resultadoMult = valor1 * valor2;
    resultadoDiv = valor1/valor2;

    printf("A soma de %d e %d é: %d\n", valor1, valor2, resultadoSoma);

    printf("A subtração de %d e %d é: %d\n", valor1, valor2, resultadoSub);

    printf("A multiplicação de %d e %d é: %d\n", valor1, valor2, resultadoMult);

    printf("A divisão de %d e %d é: %.2f\n", valor1, valor2, resultadoDiv);


}

