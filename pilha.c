#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main() {
  int pilha[TAM];
  int topo, elemento, op, i;
  topo = -1; // indicar que esta vazia
  do {
    printf("* * * *   M E N U   * * * *\n\n");
    printf("\n1 - Push");
    printf("\n2 - Pop");
    printf("\n3 - Imprimir");
    printf("\n9 - Sair\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &op);

    switch (op) {
    case 1:
      system("cls");
      printf("           P U S H          \n\n");
      if (topo <= (TAM - 2)) // verificar se a pilha esta cheia
      {
        printf("\nDigite o elemento a ser inserido: ");
        scanf("%d", &elemento);
        topo++;                 // incrementa o topo
        pilha[topo] = elemento; // adiciona o elemento a pilha
        printf("\nElemento inserido com sucesso!!\n\n");
      } else
        printf("\nImpossivel inserir... Pilha cheia...\n\n");
      system("pause");
      break;

    case 2:
      system("cls");
      printf("          P O P          \n\n");
      if (topo >= 0) // verifica se a pilha nao esta vazia
      {
        topo--; // decrementa o topo, retirando o ultimo elemento
        printf("\nElemento removido com sucesso!!\n\n");
      } else
        printf("\nImpossivel remover...\nPilha vazia!!\n\n");
      system("pause");
      break;

    case 3:
      system("cls");
      printf("          P I L H A          \n\n");
      for (i = topo; i >= 0; i--) // Percorre a pilha do topo até a base
        printf("\n%d", pilha[i]);
      system("pause");
      break;
    }

  } while (op != 9); // Continua o loop até que o usuário escolha a opção de sair

  return 0;
}
