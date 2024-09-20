//15. Escreva um programa que apresente um menu com as seguintes opções:
//1. Gerar a tabuada de um número.
//2. Sair.
//O programa deve solicitar ao usuário o número desejado e exibir a tabuada (de 1 a
//10). O menu deve continuar sendo exibido até que o usuário escolha a opção de
//sair. (0.2 ponto)


#include <stdio.h>

int main() {
    int opcao;
    int numero;

    do {

        printf("\nMenu:\n");
        printf("1. Gerar a tabuada de um número\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);


        if (opcao == 1) {
            printf("Digite o número para gerar a tabuada: ");
            scanf("%d", &numero);


            printf("Tabuada do %d:\n", numero);
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        } else if (opcao == 2) {
            printf("Saindo do programa. Até logo!\n");
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
