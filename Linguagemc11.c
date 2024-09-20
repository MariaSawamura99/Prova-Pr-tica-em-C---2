//11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
//classifique cada nota em conceitos: A (nota entre 9 e 10), B (nota entre 7 e 8.9), C
//(nota entre 5 e 6.9), D (nota entre 3 e 4.9) ou F (nota abaixo de 3).


#include <stdio.h>

int main() {
    float notas[8];
    const int alunos = 8;


    for (int i = 0; i < alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }


    printf("\nClassificação das notas:\n");
    for (int i = 0; i < alunos; i++) {
        printf("Aluno %d (nota %.2f): ", i + 1, notas[i]);

        if (notas[i] >= 9.0 && notas[i] <= 10.0) {
            printf("Conceito A\n");
        } else if (notas[i] >= 7.0 && notas[i] < 9.0) {
            printf("Conceito B\n");
        } else if (notas[i] >= 5.0 && notas[i] < 7.0) {
            printf("Conceito C\n");
        } else if (notas[i] >= 3.0 && notas[i] < 5.0) {
            printf("Conceito D\n");
        } else if (notas[i] < 3.0) {
            printf("Conceito F\n");
        } else {
            printf("Nota inválida\n");
        }
    }

    return 0;
}
