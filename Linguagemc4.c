//4. Escreva um programa que solicite ao usu�rio um n�mero decimal e um valor de
//base de convers�o (entre 2 e 16). O programa deve converter o n�mero decimal
//para a base desejada e exibir o resultado. Utilize um la�o para realizar a convers�o.
//(0.1 ponto)


#include <stdio.h>

int main() {
    int numeroDecimal, base;
    char resultado[32];
    int indice = 0;


    printf("Digite um n�mero decimal: ");
    scanf("%d", &numeroDecimal);
    printf("Digite a base de convers�o (entre 2 e 16): ");
    scanf("%d", &base);


    if (base < 2 || base > 16) {
        printf("Erro: A base deve estar entre 2 e 16.\n");
        return 1;
    }


    while (numeroDecimal > 0) {
        int resto = numeroDecimal % base;


        if (resto < 10) {
            resultado[indice] = resto + '0';
        } else {
            resultado[indice] = resto - 10 + 'A';
        }
        indice++;
        numeroDecimal /= base;
    }


    printf("N�mero convertido: ");
    for (int i = indice - 1; i >= 0; i--) {
        printf("%c", resultado[i]);
    }
    printf("\n");

    return 0;
}

