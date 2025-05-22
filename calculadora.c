#include <stdio.h>
void main()
{

    int valor1, valor2, resultado;
    int resultadom;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    resultado = valor1 + valor2;
    resultadom = valor1 - valor2;

    printf("A soma de %d e %d é: %d\n", valor1, valor2, resultado);

    printf("A subtração de %d e %d é: %d\n", valor1, valor2, resultadom);
}
