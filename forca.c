//Alunos:
//Bernardo Machado
//Vinicyus Gabriel Delfino

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Constantes
#define MAXIMO_TENTATIVAS 26
#define MAXIMO_ERROS 6
#define TAMANHO 5

int main(){
    // Variaveis pricipais
    char palavra_secreta[TAMANHO] = {'M', 'U', 'N', 'D', 'O'};
    char mascara[TAMANHO] = {'_', '_', '_', '_', '_'};
    char letras_tentadas[MAXIMO_TENTATIVAS];
    char letra;

    // Variaveis Auxiliares
    int letras_encontradas = 0;
    int acertou = 0;
    int erros = 0;
    int tentativas = 0;
    int venceu = 0;
    
    do
    {
        system("clear");
        printf("=========================\n");
        printf("======= JOGO DA FORCA ===\n");
        printf("=========================\n");
        printf("\n");

     if (tentativas > 0) {  // Mostra letras já tentadas e erros
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

    if (!isalpha(letra)) // Verifica (SE NAO for letra, entao:)
    {
    printf("\nEntrada invalida! Digite apenas letras.\n");
    printf("Pressione Enter para continuar...");
    
    getchar(); //Remover /n armazenado
    getchar(); //Esperar o usuario digitar enter

    continue; // Faz o loop voltar
    }

    letra = toupper(letra); // Trasnforma letra minuscula em maiuscula

        letras_tentadas[tentativas] = letra; // Guarda letra tentada
        tentativas++; 
        for (int i = 0; i < TAMANHO; i++) 
        {
          if (letra == palavra_secreta[i]) // Verifica se a letra existe na palavra secreta
          {
              mascara[i] = letra; 
              acertou = 1;
          }
        }
        if (acertou == 0)  // Se não acertou, adiciona erro
        {
            erros++;
        }
        
        letras_encontradas = 0;
        for (int i = 0; i < TAMANHO; i++) // Conta letras descobertas
        {
            if (mascara[i] != '_')
            {
                letras_encontradas++;
            }
        }

        if (letras_encontradas == TAMANHO)  // Verifica vitória
        {
            venceu = 1;
        } 
    } while (erros < MAXIMO_ERROS && venceu == 0);

//Mensagem final
        if (venceu == 1)
        {
        system("clear");
        printf("=========================\n");
        printf("======= JOGO DA FORCA ===\n");
        printf("=========================\n");
        printf("Parabens, voce venceu!\n");
        printf("Palavra final: ");
        for (int i = 0; i < TAMANHO; i++)
        {
            printf("%c", palavra_secreta[i]);
        }
        printf("\n");
    } else {
        system("clear");
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
        printf("   ====||\n");
        printf("   O   ||\n");
        printf("  /|\\  ||\n");
        printf("  / \\  ||\n");
        printf("=======||\n");
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