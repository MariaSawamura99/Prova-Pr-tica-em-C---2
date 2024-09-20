//5) um programa que peça ao usuário para inserir 10 números inteiros. O
//programa deve contar quantos números são pares e quantos são ímpares, e exibir
//esses valores no final.

#include <stdio.h>

int main() {
    int numeros[10];
    int par = 0, impar = 0;


    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
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
