# Jogo da Forca em C

Projeto desenvolvido para a disciplina de Algoritmos e Programação.

## Descrição

Este projeto consiste em um jogo da forca desenvolvido em linguagem C, executado diretamente no terminal. O jogo permite que o usuário tente descobrir a palavra secreta digitando letras, enquanto a forca é desenhada conforme os erros aumentam.

O desenvolvimento foi realizado sem a utilização de funções customizadas, conforme solicitado na atividade.

---

## Funcionalidades

- Exibição da forca em ASCII
- Controle de tentativas e erros
- Máscara da palavra secreta
- Histórico de letras digitadas
- Conversão automática de letras minúsculas para maiúsculas
- Verificação de vitória e derrota
- Exibição da palavra correta ao final da partida

---

## Tecnologias Utilizadas

- Linguagem C
- Biblioteca `stdio.h`
- Biblioteca `stdlib.h`
- Biblioteca `ctype.h`

---

## Estrutura Utilizada

O projeto utiliza:

- Vetores
- Estruturas condicionais (`if`, `else`, `switch`)
- Estruturas de repetição (`for`, `do while`)
- Manipulação de caracteres
- Lógica de validação e controle de estado

---

## Como Executar

### Compilar

```bash
gcc forca.c -o app.exe
```
```
./app.exe
```

---

## Observações

O projeto foi desenvolvido e testado utilizando terminal com suporte ao comando:

```c
system("cls");
```

Em sistemas Linux, pode ser necessário substituir por:

```c
system("clear");
```

---

## Autores

- Vinicyus Gabriel Delfino
- Bernardo Machado