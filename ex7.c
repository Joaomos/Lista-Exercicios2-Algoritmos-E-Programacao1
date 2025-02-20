#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float salario, imposto, valorImposto, aumento, novoSalario;

    printf("Menu de opcoes: \n");
    printf("1. Imposto\n");
    printf("2. Novo salario\n");
    printf("3. Classificacao\n");
    printf("Digite a opcao desejada.");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Digite o salario do funcionario: ");
        scanf("%f", &salario);

        if(salario < 500) {
            imposto = 0.05;
            valorImposto = salario * imposto;
            printf("O valor do imposto e R$ %.2f", valorImposto);
        } else if(salario < 850) {
            imposto = 0.1;
            valorImposto = salario * imposto;
            printf("O valor do imposto e R$ %.2f", valorImposto);
        } else {
            imposto = 0.15;
            valorImposto = salario * imposto;
            printf("O valor do imposto e R$ %.2f", valorImposto);
        }
    } else if (opcao == 2) {
        printf("Digite o salario do funcionario: ");
        scanf("%f", &salario);

        if(salario > 1500) {
            aumento = 25;
            novoSalario = salario + aumento;
        } else if(salario > 750) {
            aumento = 50;
            novoSalario = salario + aumento;
        } else if(salario > 450) {
            aumento = 75;
            novoSalario = salario + aumento;
        } else {
            aumento = 100;
            novoSalario = salario + aumento;
        }

        printf("O novo salario e R$ %.2f", novoSalario);
    } else if (opcao == 3) {
        printf("Digite o salario do funcionario: ");
        scanf("%f", &salario);

        if(salario < 700) {
            printf("A classificacao do salario do funcionarion e mal remunerado.");
        } else {
            printf("A classificacao do salario do funcionarion e bem remunerado.");
        }
    }

    return 0;
}