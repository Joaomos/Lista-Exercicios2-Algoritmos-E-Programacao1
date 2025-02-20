#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco, valorAdicional, imposto, precoCusto, desconto, novoPreco;
    char tipo, refrigeracao;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o tipo do produto (A - Alimentacao, L - Limpeza, V - Vestuario): ");
    scanf(" %c", &tipo);
    printf("O produto necessita de refrigeracao? (S - Sim, N - Nao): ");
    scanf(" %c", &refrigeracao);

    if (refrigeracao == 'N') {
        if (tipo == 'A') {
            if (preco < 15) valorAdicional = 2.00;
            else valorAdicional = 5.00;
        } else if (tipo == 'L') {
            if (preco < 10) valorAdicional = 1.50;
            else valorAdicional = 2.50;
        } else { 
            if (preco < 30) valorAdicional = 3.00;
            else valorAdicional = 2.50;
        }
    } else { 
        if (tipo == 'A') valorAdicional = 8.00;
        else valorAdicional = 0.00;
    }

    if (preco < 25) imposto = preco * 0.05;
    else imposto = preco * 0.08;

    precoCusto = preco + imposto;

    if (tipo == 'A' && refrigeracao == 'S') desconto = 0.00;
    else desconto = preco * 0.03;

    novoPreco = preco + valorAdicional - desconto;

    printf("Valor Adicional: R$ %.2f\n", valorAdicional);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Preco de Custo: R$ %.2f\n", precoCusto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Novo Preco: R$ %.2f\n", novoPreco);

    if (novoPreco <= 50) 
        printf("Classificacao: Barato\n");
    else if (novoPreco <= 100) 
        printf("Classificacao: Normal\n");
    else 
        printf("Classificacao: Caro\n");

    return 0;
}