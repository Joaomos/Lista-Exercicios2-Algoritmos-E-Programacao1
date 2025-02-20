#include <stdio.h>
#include <stdlib.h>

int main()
{

    int I;
    float A, B, C;

    printf("Digite o numero de controle: ");
    scanf("%d", &I);

    printf("Digite os outros 3 numeros: ");
    scanf("%f %f %f", &A, &B, &C);

    if (I == 1) { 
        if (A < B && B < C)
            printf("Ordem crescente: %.2f %.2f %.2f\n", A, B, C);
        else if (A < C && C < B)
            printf("Ordem crescente: %.2f %.2f %.2f\n", A, C, B);
        else if (B < A && A < C)
            printf("Ordem crescente: %.2f %.2f %.2f\n", B, A, C);
        else if (B < C && C < A)
            printf("Ordem crescente: %.2f %.2f %.2f\n", B, C, A);
        else if (C < A && A < B)
            printf("Ordem crescente: %.2f %.2f %.2f\n", C, A, B);
        else
            printf("Ordem crescente: %.2f %.2f %.2f\n", C, B, A);
    } 
    else if (I == 2) { 
        if (A > B && B > C)
            printf("Ordem decrescente: %.2f %.2f %.2f\n", A, B, C);
        else if (A > C && C > B)
            printf("Ordem decrescente: %.2f %.2f %.2f\n", A, C, B);
        else if (B > A && A > C)
            printf("Ordem decrescente: %.2f %.2f %.2f\n", B, A, C);
        else if (B > C && C > A)
            printf("Ordem decrescente: %.2f %.2f %.2f\n", B, C, A);
        else if (C > A && A > B)
            printf("Ordem decrescente: %.2f %.2f %.2f\n", C, A, B);
        else
            printf("Ordem decrescente: %.2f %.2f %.2f\n", C, B, A);
    } 
    else if (I == 3) { 
        if ((A > B && A < C) || (A < B && A > C))
            printf("Maior no meio: %.2f %.2f %.2f\n", B, A, C);
        else if ((B > A && B < C) || (B < A && B > C))
            printf("Maior no meio: %.2f %.2f %.2f\n", A, B, C);
        else
            printf("Maior no meio: %.2f %.2f %.2f\n", A, C, B);
    }

    return 0;
}