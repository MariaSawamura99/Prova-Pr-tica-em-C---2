//16. Escreva um programa que apresente um menu com as seguintes op��es:
//1. Calcular o fatorial de um n�mero.
//2. Sair.
//O programa deve solicitar ao usu�rio um n�mero inteiro e calcular o seu fatorial. O
//menu deve continuar sendo exibido at� que o usu�rio escolha a op��o de sair. (0.2
//ponto)


#include <stdio.h>

int main() {
    int opcao;
    int numero;
    long long fat;

    do {

        printf("\nMenu:\n");
        printf("1. Calcular o fatorial de um n�mero\n");
        printf("2. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);


        if (opcao == 1) {
            printf("Digite um n�mero inteiro n�o negativo: ");
            scanf("%d", &numero);

            if (numero < 0) {
                printf("Erro: O n�mero deve ser n�o negativo.\n");
            } else {
                fat = 1;
                for (int i = 1; i <= numero; i++) {
                    fat = fat * i;
                }
                printf("O fatorial de %d � %lld\n", numero, fat);
            }
        } else if (opcao == 2) {
            printf("Saindo do programa. At� logo!\n");
        } else {
            printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}

