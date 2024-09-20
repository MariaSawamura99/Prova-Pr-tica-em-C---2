//10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
//Para cada idade, o programa deve classificar a pessoa em uma das categorias:
//criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
//anos ou mais).

#include <stdio.h>

int main() {
    int idades[10];
    int pessoas = 10;


    for (int i = 0; i < pessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }


    printf("\nClassificação das idades:\n");
    for (int i = 0; i < pessoas; i++) {
        printf("Pessoa %d (idade %d): ", i + 1, idades[i]);

        if (idades[i] >= 0 && idades[i] <= 12) {
            printf("Crianca\n");
        } else if (idades[i] >= 13 && idades[i] <= 17) {
            printf("Adolescente\n");
        } else if (idades[i] >= 18 && idades[i] <= 64) {
            printf("Adulto\n");
        } else if (idades[i] >= 65) {
            printf("Idoso\n");
        } else {
            printf("Idade invalida\n");
        }
    }

    return 0;
}
