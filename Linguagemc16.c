//16. Escreva um programa que apresente um menu com as seguintes opções:
//1. Calcular o fatorial de um número.
//2. Sair.
//O programa deve solicitar ao usuário um número inteiro e calcular o seu fatorial. O
//menu deve continuar sendo exibido até que o usuário escolha a opção de sair. (0.2
//ponto)


#include <stdio.h>

int main() {
    int opcao;
    int numero;
    long long fat;

    do {

        printf("\nMenu:\n");
        printf("1. Calcular o fatorial de um número\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);


        if (opcao == 1) {
            printf("Digite um número inteiro não negativo: ");
            scanf("%d", &numero);

            if (numero < 0) {
                printf("Erro: O número deve ser não negativo.\n");
            } else {
                fat = 1;
                for (int i = 1; i <= numero; i++) {
                    fat = fat * i;
                }
                printf("O fatorial de %d é %lld\n", numero, fat);
            }
        } else if (opcao == 2) {
            printf("Saindo do programa. Até logo!\n");
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}

