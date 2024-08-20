#include <stdio.h>
#include <math.h>

main()
{


    char nome[10];
    int idade;
    float peso;
    float altura;

    printf("digite seu nome:\n");
    scanf("%s", nome);

    printf("digite sua idade:\n");
    scanf("%i", &idade);

    printf("digite seu peso:\n");
    scanf("%f", &peso);

    printf("digite sua altura em cm:\n");
    scanf("%f", &altura);

    float imc = peso / ((altura * altura) / 10000);
    
    printf("seu nome e %s e voce tem %i anos idade e sua IMC e: %.2f", nome, idade, imc);
}