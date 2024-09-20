//14. Escreva um programa que apresente um menu com as seguintes opções:
//1. Adição.
//2. Subtração.
//3. Multiplicação.
//4. Divisão.
//5. Sair.
//O programa deve solicitar dois números e realizar a operação escolhida. Deve
//continuar exibindo o menu até que o usuário escolha a opção de sair. (0.2 ponto)



#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\nMenu de Operações:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);


        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
        }

        if (opcao == 1) {
            resultado = num1 + num2;
            printf("Resultado da adição: %.2f\n", resultado);
        } else if (opcao == 2) {
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
        } else if (opcao == 3) {
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
        } else if (opcao == 4) {
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
        } else if (opcao == 5) {
            printf("Saindo do programa. Até logo!\n");
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
