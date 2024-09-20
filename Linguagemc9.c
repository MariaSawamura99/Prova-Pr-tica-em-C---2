//9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
//Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
//maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
//vai para a recuperação, e se for menor que 5.0, o aluno é reprovado. (0.4 ponto)



#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int quant_alunos = 5;


    for (int i = 0; i < quant_alunos; i++) {
        printf("Aluno %d:\n", i + 1);


        printf("Digite a nota da 1ª prova: ");
        scanf("%f", &nota1);
        printf("Digite a nota da 2ª prova: ");
        scanf("%f", &nota2);


        media = (nota1 + nota2) / 2;


        printf("Média: %.2f. Situacao: ", media);
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else if (media >= 5.0) {
            printf("Recuperacao\n");
        } else {
            printf("Reprovado\n");
        }

        printf("\n");
    }

    return 0;
}
