//6. Escreva um programa que solicite dois n�meros inteiros positivos ao usu�rio: um
//valor inicial e um valor final. O programa deve ent�o exibir todos os n�meros primos
//dentro desse intervalo. Se n�o houver n�meros primos no intervalo, o programa
//deve informar isso. (0.3 ponto)

#include <stdio.h>

int eh_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1; // � primo
}

int main() {
    int inicio, fim;


    printf("Digite o valor inicial (positivo): ");
    scanf("%d", &inicio);
    printf("Digite o valor final (positivo): ");
    scanf("%d", &fim);


    if (inicio > fim) {
        printf("O valor inicial deve ser menor ou igual ao valor final.\n");
        return 1;
    }

    int encontrou_primo = 0;

    printf("N�meros primos entre %d e %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
            encontrou_primo = 1;
        }
    }


    if (!encontrou_primo) {
        printf("N�o h� n�meros primos no intervalo.\n");
    } else {
        printf("\n");
    }

    return 0;
}
