#include <stdio.h>
#include <stdlib.h>

int main()
{

    int codigo;
    float salario, salarioComAumento;

    printf("Digite o codigo: ");
    scanf("%d", &codigo);
    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(codigo == 1) {
        salarioComAumento = salario + (salario * 0.5);
        printf("O cargo e Escriturario.\n");
        printf("O valor do aumento e 50%%.\n");
        printf("O seu novo salario e R$ %.2f.\n", salarioComAumento);
    } else if(codigo == 2) {
        salarioComAumento = salario + (salario * 0.35);
        printf("O cargo e Secretario.\n");
        printf("O valor do aumento e 35%%.\n");
        printf("O seu novo salario e R$ %.2f\n", salarioComAumento);
    } else if(codigo == 3) {
        salarioComAumento = salario + (salario * 0.20);
        printf("O cargo e Caixa.\n");
        printf("O valor do aumento e 20%%.\n");
        printf("O seu novo salario e R$ %.2f\n", salarioComAumento);
    } else if(codigo == 4) {
        salarioComAumento = salario + (salario * 0.1);
        printf("O cargo e Gerente.\n");
        printf("O valor do aumento e 10%%.\n");
        printf("O seu novo salario e R$ %.2f\n", salarioComAumento);
    } else if(codigo == 5) {
        salarioComAumento = salario + (salario * 0);
        printf("O cargo e Diretor.\n");
        printf("O valor do aumento e 0%%.\n");
        printf("O seu novo salario e R$ %.2f.\n", salarioComAumento);
    }

    return 0;
}