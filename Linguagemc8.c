//8. Escreva um programa que sorteie um n�mero entre 1 e 100 e permita ao usu�rio
//tentar adivinhar o n�mero. O programa deve dar dicas se o n�mero sorteado �
//maior ou menor que o palpite do usu�rio. O usu�rio tem no m�ximo 7 tentativas
//para acertar. No final, informe se o usu�rio acertou ou n�o. (0.3 ponto)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite;
    int tentativas = 0;
    const int MAX_TENTATIVAS = 7;


    srand(time(NULL));
    numero_sorteado = rand() % 100 + 1;

    printf("Adivinhe o n�mero entre 1 e 100! Voc� tem %d tentativas.\n", MAX_TENTATIVAS);


    while (tentativas < MAX_TENTATIVAS) {
        printf("Tentativa %d: Digite seu palpite: ", tentativas + 1);
        scanf("%d", &palpite);
        tentativas++;


        if (palpite == numero_sorteado) {
            printf("Voc� acertou! O n�mero era %d.\n", numero_sorteado);
            return 0;
        }


        if (palpite < numero_sorteado) {
            printf("O n�mero � maior que %d.\n", palpite);
        } else {
            printf("O n�mero � menor que %d.\n", palpite);
        }
    }


    printf("Voc� n�o acertou! O n�mero era %d.\n", numero_sorteado);
    return 0;
}
