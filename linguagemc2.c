//2. Um n�mero perfeito � aquele que � igual � soma de seus divisores pr�prios
//(excluindo ele mesmo). Escreva um programa que solicite ao usu�rio um n�mero
//inteiro positivo e verifique se esse n�mero � perfeito. O programa deve utilizar um
//la�o para somar os divisores e, no final, informar se o n�mero � perfeito ou n�o. (0.1
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
