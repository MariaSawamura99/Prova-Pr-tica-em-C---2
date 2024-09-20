//8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
//tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
//maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
//para acertar. No final, informe se o usuário acertou ou não. (0.3 ponto)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite;
    int tentativas = 0;
    const int MAX_TENTATIVAS = 7;


    srand(time(NULL));
    numero_sorteado = rand() % 100 + 1;

    printf("Adivinhe o número entre 1 e 100! Você tem %d tentativas.\n", MAX_TENTATIVAS);


    while (tentativas < MAX_TENTATIVAS) {
        printf("Tentativa %d: Digite seu palpite: ", tentativas + 1);
        scanf("%d", &palpite);
        tentativas++;


        if (palpite == numero_sorteado) {
            printf("Você acertou! O número era %d.\n", numero_sorteado);
            return 0;
        }


        if (palpite < numero_sorteado) {
            printf("O número é maior que %d.\n", palpite);
        } else {
            printf("O número é menor que %d.\n", palpite);
        }
    }


    printf("Você não acertou! O número era %d.\n", numero_sorteado);
    return 0;
}
