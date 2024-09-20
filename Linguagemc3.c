//3. Escreva um programa em C que solicite ao usuário as notas de 5 alunos e suas
//respectivas pesos, calcule a média ponderada de cada aluno e ao final exiba a
//média final da turma. (0.1 ponto)


#include <stdio.h>

int main() {
    float notas[5];
    float pesos[5];
    float mediaPonderada;
    float somaMedia = 0;
    float somaPesos = 0;


    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        printf("Digite o peso da nota do aluno %d: ", i + 1);
        scanf("%f", &pesos[i]);
    }


    for (int i = 0; i < 5; i++) {
        somaMedia += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    mediaPonderada = somaMedia / somaPesos;


    printf("Média final da turma: %.2f\n", mediaPonderada);

    return 0;
}
