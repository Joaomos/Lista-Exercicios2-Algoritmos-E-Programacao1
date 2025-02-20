#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigoProduto, codigoPais;
    float pesoKg, pesoGramas, precoPorGrama, precoTotal, imposto, precoFinal;

    printf("Digite o codigo do produto (1 a 10): ");
    scanf("%d", &codigoProduto);
    printf("Digite o peso do produto em kg: ");
    scanf("%f", &pesoKg);
    printf("Digite o codigo do pais de origem (1 a 3): ");
    scanf("%d", &codigoPais);

    pesoGramas = pesoKg * 1000;

    if (codigoProduto >= 1 && codigoProduto <= 4)
        precoPorGrama = 10;
    else if (codigoProduto >= 5 && codigoProduto <= 7)
        precoPorGrama = 25;
    else
        precoPorGrama = 35;

    precoTotal = pesoGramas * precoPorGrama;

    if (codigoPais == 1)
        imposto = 0;
    else if (codigoPais == 2)
        imposto = precoTotal * 0.15;
    else
        imposto = precoTotal * 0.25;

    precoFinal = precoTotal + imposto;

    printf("Peso em gramas: %.2f g\n", pesoGramas);
    printf("Preco total: R$ %.2f\n", precoTotal);
    printf("Valor do imposto: R$ %.2f\n", imposto);
    printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}
