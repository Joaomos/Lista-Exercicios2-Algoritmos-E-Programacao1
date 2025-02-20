#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if(num1 > num2) {
        printf("%f", num1);
    } else {
        printf("%f", num2);
    }

    return 0;
}