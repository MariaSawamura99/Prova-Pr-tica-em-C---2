//5) um programa que pe�a ao usu�rio para inserir 10 n�meros inteiros. O
//programa deve contar quantos n�meros s�o pares e quantos s�o �mpares, e exibir
//esses valores no final.

#include <stdio.h>

int main() {
    int numeros[10];
    int par = 0, impar = 0;


    for (int i = 0; i < 10; i++) {
        printf("Digite o %d� n�mero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);


        if (numeros[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }


    printf("Numeros pares: %d\n", par);
    printf("Numeros impares: %d\n", impar);

    return 0;
}
