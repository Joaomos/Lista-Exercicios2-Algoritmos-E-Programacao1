#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    if(num1 % 2 == 0) {
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }

    return 0;
}