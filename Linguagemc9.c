//9. Escreva um programa que pe�a ao usu�rio para inserir as notas de 5 alunos.
//Para cada aluno, o programa deve calcular a m�dia de duas provas. Se a m�dia for
//maior ou igual a 7.0, o aluno � aprovado. Se a m�dia estiver entre 5.0 e 6.9, o aluno
//vai para a recupera��o, e se for menor que 5.0, o aluno � reprovado. (0.4 ponto)



#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int quant_alunos = 5;


    for (int i = 0; i < quant_alunos; i++) {
        printf("Aluno %d:\n", i + 1);


        printf("Digite a nota da 1� prova: ");
        scanf("%f", &nota1);
        printf("Digite a nota da 2� prova: ");
        scanf("%f", &nota2);


        media = (nota1 + nota2) / 2;


        printf("M�dia: %.2f. Situacao: ", media);
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
