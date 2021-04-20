#include <stdio.h>
#include <stdlib.h>


int main()
{

    float nota1, nota2, media;

    printf("Digite a nota 1:\n");
    scanf("%f" , &nota1);

    printf("Digite a nota 2: \n");
    scanf("%f", &nota2);

    media= (nota1+nota2)/2;

    if ( media >= 5){
        printf("ALUNO APROVADO");
    }else {
        printf("ALUNO REPROVADO");
    }
    return 0;
}
