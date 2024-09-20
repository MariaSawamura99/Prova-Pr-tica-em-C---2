//7. Crie um programa que pe�a ao usu�rio para inserir as notas de 5 alunos. Para
//cada aluno, o programa deve calcular a m�dia. Se a m�dia for maior ou igual a 7.0,
//o aluno � aprovado; caso contr�rio, ele � reprovado. Ao final, o programa deve exibir
//a m�dia de cada aluno e se ele foi aprovado ou reprovado. (0.3 ponto)


#include <stdio.h>

int main() {
    float notas[5];
    float media;


    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }


    for (int i = 0; i < 5; i++) {

        media = notas[i];


        printf("Aluno %d: M�dia = %.2f, ", i + 1, media);
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
