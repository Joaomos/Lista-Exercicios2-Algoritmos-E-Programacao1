#include <stdio.h>
#include <stdlib.h>

int main()
{
    float trabalhoLaboratorio, avaliacaoSemestral, exameFinal, media;

    printf("Digite a no do aluno no trabalho de laboratorio: ");
    scanf("%f", &trabalhoLaboratorio);
    printf("Digite a no do aluno na avaliacao semestral: ");
    scanf("%f", &avaliacaoSemestral);
    printf("Digite a no do aluno no exame final: ");
    scanf("%f", &exameFinal);

    media = ((trabalhoLaboratorio * 2) + (avaliacaoSemestral * 3) + (exameFinal * 5)) / 10;

    if(media < 5.0) {
        printf("O conceito do aluno e E");
    } else if(media < 6.0) {
        printf("O conceito do aluno e D");
    } else if(media < 7.0) {
        printf("O conceito do aluno e C");
    } else if(media < 8.0) {
        printf("O conceito do aluno e B");
    } else if(media < 10.0) {
        printf("O conceito do aluno e A");
    } else {
        printf("Os valores digitados estao errados");
    }

    return 0;
}