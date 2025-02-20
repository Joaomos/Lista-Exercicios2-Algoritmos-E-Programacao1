#include <stdio.h>
#include <stdlib.h>

int main() {
    float salarioMinimo, horasTrabalhadas, coeficiente, salarioBruto, imposto, gratificacao, auxilio, salarioLiquido;
    char turno, categoria;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o turno de trabalho (M - Matutino, V - Vespertino, N - Noturno): ");
    scanf(" %c", &turno);
    printf("Digite a categoria (O - Operario, G - Gerente): ");
    scanf(" %c", &categoria);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    if (turno == 'M')
        coeficiente = 0.1 * salarioMinimo;
    else if (turno == 'V')
        coeficiente = 0.15 * salarioMinimo;
    else
        coeficiente = 0.12 * salarioMinimo;

    salarioBruto = horasTrabalhadas * coeficiente;

    if (categoria == 'O') {
        if (salarioBruto >= 300)
            imposto = salarioBruto * 0.05;
        else
            imposto = salarioBruto * 0.03;
    } else {
        if (salarioBruto >= 400)
            imposto = salarioBruto * 0.06;
        else
            imposto = salarioBruto * 0.04;
    }

    if (turno == 'N' && horasTrabalhadas > 80)
        gratificacao = 50;
    else
        gratificacao = 30;

    if (categoria == 'O' || coeficiente <= 25)
        auxilio = salarioBruto / 3;
    else
        auxilio = salarioBruto / 2;

    salarioLiquido = salarioBruto - imposto + gratificacao + auxilio;

    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Auxilio Alimentacao: R$ %.2f\n", auxilio);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    if (salarioLiquido < 350)
        printf("Classificacao: Mal remunerado\n");
    else if (salarioLiquido <= 600)
        printf("Classificacao: Normal\n");
    else
        printf("Classificacao: Bem remunerado\n");

    return 0;
}
