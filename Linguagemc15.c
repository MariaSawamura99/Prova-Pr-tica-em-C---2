//15. Escreva um programa que apresente um menu com as seguintes op��es:
//1. Gerar a tabuada de um n�mero.
//2. Sair.
//O programa deve solicitar ao usu�rio o n�mero desejado e exibir a tabuada (de 1 a
//10). O menu deve continuar sendo exibido at� que o usu�rio escolha a op��o de
//sair. (0.2 ponto)


#include <stdio.h>

int main() {
    int opcao;
    int numero;

    do {

        printf("\nMenu:\n");
        printf("1. Gerar a tabuada de um n�mero\n");
        printf("2. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);


        if (opcao == 1) {
            printf("Digite o n�mero para gerar a tabuada: ");
            scanf("%d", &numero);


            printf("Tabuada do %d:\n", numero);
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        } else if (opcao == 2) {
            printf("Saindo do programa. At� logo!\n");
        } else {
            printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
