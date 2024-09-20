//13. Escreva um programa que apresente um menu com as seguintes opções:
//1. Converter de Celsius para Fahrenheit.
//2. Converter de Fahrenheit para Celsius.
//3. Sair.
//O programa deve continuar exibindo o menu até que o usuário escolha a opção de
//sair. (0.2 ponto)


#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        printf("\nMenu de Conversao:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = (temperatura * 9.0 / 5.0) + 32.0;
            printf("%.2f °C é igual a %.2f °F\n", temperatura, resultado);
        } else if (opcao == 2) {
            printf("Digite a temperatura em fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32.0) * 5.0 / 9.0;
            printf("%.2f °F h igual a %.2f °C\n", temperatura, resultado);
        } else if (opcao == 3) {
            printf("Saindo do programa. Ate logo!\n");
        } else {
            printf("Opção invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
