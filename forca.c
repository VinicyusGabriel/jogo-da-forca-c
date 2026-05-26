#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define MAXIMO_TENTATIVAS 26
#define MAXIMO_ERROS 6
#define TAMANHO 5

int main(){
    char palavra_secreta[TAMANHO] = {'M', 'U', 'N', 'D', 'O'};
    char mascara[TAMANHO] = {'_', '_', '_', '_', '_'};
    char letras_tentadas[MAXIMO_TENTATIVAS];
    char letra;
    int letras_encontradas = 0;
    int acertou = 0;
    int erros = 0;
    int tentativas = 0;
    int venceu = 0;
    
    do
    {
        system("cls");
        printf("=========================\n");
        printf("======= JOGO DA FORCA ===\n");
        printf("=========================\n");
        printf("\n");
     if (tentativas > 0) {
        printf("Letras tentadas: ");
        for (int i = 0; i < tentativas; i++)
        {
            if (i == tentativas - 1)
            {
            printf("%c", letras_tentadas[i]);    
            } else
            printf("%c, ", letras_tentadas[i]);
        }
        printf("\n\nErros: %d/%d\n", erros, MAXIMO_ERROS);
        printf("\n");
    }

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
            printf("  /|\\  ||\n");
            printf("       ||\n");
            printf("=======||\n");
            break;
        case 5:
            printf("   ====||\n");
            printf("   O   ||\n");
            printf("  /|\\  ||\n");
            printf("  /    ||\n");
            printf("=======||\n");
            break;
        case 6:
            printf("   ====||\n");
            printf("   O   ||\n");
            printf("  /|\\  ||\n");
            printf("  / \\  ||\n");
            printf("=======||\n");
            break;

        default:
            break;
        }

        printf("\nPalavra: ");
        for (int i = 0; i < TAMANHO; i++)
        {
            printf("%c ", mascara[i]);
        }

        acertou = 0;
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);
        letra = toupper(letra); // Trasnforma letra minuscula em maiuscula
        letras_tentadas[tentativas] = letra; // Guarda a letra no vetor
        tentativas++; 
        for (int i = 0; i < TAMANHO; i++) 
        {
          if (letra == palavra_secreta[i]) // Verifica se a letra existe na palavra secreta
          {
              mascara[i] = letra; 
              acertou = 1;
          }
        }
        if (acertou == 0)
        {
            erros++;
        }
        
        letras_encontradas = 0;

        for (int i = 0; i < TAMANHO; i++)
        {
            if (mascara[i] != '_')
            {
                letras_encontradas++;
            }
        }

        if (letras_encontradas == TAMANHO)
        {
            venceu = 1;
        } 
    } while (erros < MAXIMO_ERROS && venceu == 0);

//Mensagem final
        if (venceu == 1)
        {
        system("cls");
        printf("=========================\n");
        printf("======= JOGO DA FORCA ===\n");
        printf("=========================\n");
        printf("Parabens, voce venceu!\n");
        printf("Palavra final: ");
        for (int i = 0; i < TAMANHO; i++)
        {
            printf("%c", palavra_secreta[i]);
        }
    } else {
        system("cls");
        printf("=========================\n");
        printf("======= JOGO DA FORCA ===\n");
        printf("=========================\n");
        printf("Voce perdeu. Game over!\n");
        printf("Palavra correta: ");
        for (int i = 0; i < TAMANHO; i++)
        {
            printf("%c", palavra_secreta[i]);
        }
        printf("\n");
        
    }
    
    

    return 0;
}