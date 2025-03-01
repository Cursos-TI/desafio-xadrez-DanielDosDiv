#include <stdio.h>

int main()
{
    int Escolha;

    printf("\n----- Seja bem-vindo ao jogo de Xadrez -----\n");

    do
    {
        printf("Escolha a peça que você deseja mover: \n");
        printf("1- Torre \n2- Bispo \n3- Rainha\n");
        scanf("%d", &Escolha);

        if (Escolha < 1 || Escolha > 3)
        {
            printf("Escolha inválida, por favor escolha de novo\n");
        }

    } while (Escolha < 1 || Escolha > 3);

    switch (Escolha)
    {
    // Movimento da Torre
    case 1:
        for (int i = 0; i < 5; i++)
        {
            printf("Torre: direita\n");
        }
        break;

    // Movimento do Bispo
    case 2:
         for (int i = 0; i < 5; i++)
        {
            printf("Bispo: Cima, Direita\n");
            
        }
        break;

    // Movimento da Rainha
    case 3:
        for (int i = 0; i < 8; i++)
        {
            printf("Rainha: Esquerda\n");
        }
        break;

    default:
        break;
    }
    printf("Jogo finalizado!!");
    return 0;
}
