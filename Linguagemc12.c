//12. Escreva um programa que solicite ao usu�rio 6 n�meros inteiros. Para cada
//n�mero, verifique se ele � par ou �mpar. Se o n�mero for par, verifique se � maior
//que 10 ou n�o. Se for �mpar, verifique se � menor que 50 ou n�o. (0.4 ponto)


#include <stdio.h>

int main() {
    int numeros[10];
    const int numer1 = 6;


    for (int i = 0; i < numer1; i++) {
        printf("Digite o %d� numero inteiro: ", i + 1);
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
            printf("� �mpar.");
            if (numeros[i] < 50) {
                printf(" E eh menor que 50.\n");
            } else {
                printf(" E nao eh menor que 50.\n");
            }
        }
    }

    return 0;
}
