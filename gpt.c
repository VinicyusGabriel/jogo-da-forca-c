#include <stdio.h>

#define TAM 5
#define ERROS 6
#define TENTATIVAS 26

int main() {

    int erros = 0;
    int venceu = 0;
    int encontrou = 0;
    int letrasDescobertas = 0;
    int i;
    char letra;
    char palavra[TAM] = {'M', 'U', 'N', 'D', 'O'};
    char mascara[TAM] = {'_', '_', '_', '_', '_'};
    char tentativas[TENTATIVAS];
    int totalTentativas = 0;

    do {

        encontrou = 0;

        printf("=========================\n");
        printf("======= JOGO DA FORCA ===\n");
        printf("=========================\n\n");

        switch (erros)
        {

            case 0:
                printf("   ====||\n");
                printf("       ||\n");
                printf("       ||\n");
                printf("       ||\n");
                printf("=======||\n");
                break;

            case 1:
                printf("   ====||\n");
                printf("   O   ||\n");
                printf("       ||\n");
                printf("       ||\n");
                printf("=======||\n");
                break;

            case 2:
                printf("   ====||\n");
                printf("   O   ||\n");
                printf("   |   ||\n");
                printf("       ||\n");
                printf("=======||\n");
                break;

            case 3:
                printf("   ====||\n");
                printf("   O   ||\n");
                printf("  /|   ||\n");
                printf("       ||\n");
                printf("=======||\n");
                break;

            case 4:
                printf("   ====||\n");
                printf("   O   ||\n");
                printf("  /|\\ ||\n");
                printf("       ||\n");
                printf("=======||\n");
                break;

            case 5:
                printf("   ====||\n");
                printf("   O   ||\n");
                printf("  /|\\ ||\n");
                printf("  /    ||\n");
                printf("=======||\n");
                break;

            case 6:
                printf("   ====||\n");
                printf("   O   ||\n");
                printf("  /|\\ ||\n");
                printf("  / \\ ||\n");
                printf("=======||\n");
                break;

            default:
                break;
        }

        printf("PALAVRA: ");

        for (i = 0; i < TAM; i++)
        {
            printf("%c ", mascara[i]);
        }

        printf("\n");

        printf("LETRAS TENTADAS: \n");

        for (i = 0; i < totalTentativas; i++)
        {
            printf("%c ", tentativas[i]);
        }

        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        if (letra >= 'a' && letra <= 'z')
        {
            letra = letra - 32;
        }

        tentativas[totalTentativas] = letra;
        totalTentativas++;

        for (i = 0; i < TAM; i++)
        {
            if (letra == palavra[i])
            {
                mascara[i] = letra;
                encontrou = 1;
            }
        }

        if (encontrou == 0)
        {
            erros++;
        }

        letrasDescobertas = 0;

        for (i = 0; i < TAM; i++)
        {
            if (mascara[i] != '_')
            {
                letrasDescobertas++;
            }
        }

        if (letrasDescobertas == TAM)
        {
            venceu = 1;
        }

    } while (erros < ERROS && venceu == 0);

    if (venceu == 1)
    {
        printf("=========================\n");
        printf("======= VOCE VENCEU =====\n");
        printf("=========================\n\n");

        printf("Palavra correta: ");

        for (i = 0; i < TAM; i++)
        {
            printf("%c ", palavra[i]);
        }

        printf("\n");
    }
    else
    {
        printf("=========================\n");
        printf("======== GAME OVER ======\n");
        printf("=========================\n\n");

        printf("   ====||\n");
        printf("   O   ||\n");
        printf("  /|\\ ||\n");
        printf("  / \\ ||\n");
        printf("=======||\n");

        printf("A palavra era: \n");

        for (i = 0; i < TAM; i++)
        {
            printf("%c ", palavra[i]);
        }

        printf("\n");
    }

    return 0;
}