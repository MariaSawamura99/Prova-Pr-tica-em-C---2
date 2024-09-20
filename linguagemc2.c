//2. Um número perfeito é aquele que é igual à soma de seus divisores próprios
//(excluindo ele mesmo). Escreva um programa que solicite ao usuário um número
//inteiro positivo e verifique se esse número é perfeito. O programa deve utilizar um
//laço para somar os divisores e, no final, informar se o número é perfeito ou não. (0.1
//ponto)


#include <stdio.h>

int main () {
    int numero,index,soma = 0;

    do{
    printf("Digite um numero maior do que zero: ");
    scanf("%d", &numero);

    for(index = 1; index < numero; index ++){
        if (numero % index == 0 ){
        soma += index;

        }
    }

    if(soma == numero)
        printf("%d e um numero perfeito!\n",numero);
    else
        printf("%d nao e um numero perfeito!",numero);
        soma = 0;
    } while (numero !=0);
    return 0;

}
