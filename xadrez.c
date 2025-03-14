#include <stdio.h>
void MovimentoTorre(int i)
{
    if (i > 0)
    {
        printf("Torre: direita\n");
        MovimentoTorre(i - 1);  // Chama a si mesma com n - 1
    }
};
void MovimentoBispo(int i)
{
    if (i > 0)
    {
        printf("Bispo: Cima \n");
        printf("Bispo :Direita\n");
         MovimentoBispo(i - 1);
    }
}
void MovimentoRainha(int i)
{
    if (i > 0)
    {
        printf("Rainha: Esquerda\n");
        MovimentoRainha(i - 1);
    }
}

int main()
{
    int Escolha;

    printf("\n----- Seja bem-vindo ao jogo de Xadrez -----\n");

    do
    {
        printf("Escolha a peça que você deseja mover: \n");
        printf("1- Torre \n2- Bispo \n3- Rainha\n \n4- Cavalo: ");
        scanf("%d", &Escolha);

        if (Escolha < 1 || Escolha > 4)
        {
            printf("Escolha inválida, por favor escolha de novo\n");
        }

    } while (Escolha < 1 || Escolha > 4);

    switch (Escolha)
    {
    // Movimento da Torre
    case 1:
    MovimentoTorre(5);
        break;

    // Movimento do Bispo
    case 2:
        MovimentoBispo(5);
        break;

    // Movimento da Rainha
    case 3:
        MovimentoRainha(8);
        break;
    case 4:
        char direcaoCavalo;

        printf("Escolha a direção que deseja mover o cavalo: \n");
        getchar(); // Limpa o buffer de entrada
        scanf("%c", &direcaoCavalo);
        int movimentoCavalo = 1;
        // direcao para esquerda
        if (direcaoCavalo == 'D' || direcaoCavalo == 'd')
        {
            while (movimentoCavalo--)
            {
                for (int i = 0; i < 2; i++)
                {
                    printf("Cavalo: Cima\n");
                }
                printf("Cavalo : Direita\n");
            }
        }
        else if (direcaoCavalo == 'E' || direcaoCavalo == 'e')
        {
            while (movimentoCavalo--)
            {
                for (int i = 0, j = 2;  i < 2; i++ , j--)
                {
                    printf("Cavalo: Cima\n");
                }
                printf("Cavalo : Esquerda\n");
            }
        }
    }
    printf("Jogo finalizado!!");
    return 0;
}
