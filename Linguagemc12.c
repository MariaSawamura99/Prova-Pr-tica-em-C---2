//12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
//número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
//que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não. (0.4 ponto)


#include <stdio.h>

int main() {
    int numeros[10];
    const int numer1 = 6;


    for (int i = 0; i < numer1; i++) {
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }


    for (int i = 0; i < numer1; i++) {
        printf("Numero %d: %d - ", i + 1, numeros[i]);

        if (numeros[i] % 2 == 0) {
            printf("E par.");
            if (numeros[i] > 10) {
                printf(" E eh maior que 10.\n");
            } else {
                printf(" E nao eh maior que 10.\n");
            }
        } else {
            printf("É ímpar.");
            if (numeros[i] < 50) {
                printf(" E eh menor que 50.\n");
            } else {
                printf(" E nao eh menor que 50.\n");
            }
        }
    }

    return 0;
}
