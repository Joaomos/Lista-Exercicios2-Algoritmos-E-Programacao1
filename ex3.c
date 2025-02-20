#include <stdio.h>
#include <stdlib.h>

int main()
{

    float num1, num2, num3, num4;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);
    printf("Digite o quarto numero: ");
    scanf("%f", &num4);

    if (num4 >= num3) {
        printf("%f %f %f %f\n", num4, num3, num2, num1);
    } else if (num4 >= num2) {
        printf("%f %f %f %f\n", num3, num4, num2, num1);
    } else if (num4 >= num1) {
        printf("%f %f %f %f\n", num3, num2, num4, num1);
    } else {
        printf("%f %f %f %f\n", num3, num2, num1, num4);
    }
    

    return 0;
}