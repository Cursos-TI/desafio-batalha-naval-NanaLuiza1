#include <stdio.h>

int main(){

int tabuleiro [10][10] = {  //Criando o tabuleiro de 10 x 10

{0,0,0,0,0,0,0,0,3,0},
{0,0,0,0,0,0,0,3,0,0},
{0,3,3,3,0,0,3,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,3,0,0,0,0,0,0},
{0,0,3,0,0,0,0,0,3,0},
{0,3,0,0,0,0,0,0,3,0},
{0,0,0,0,0,0,0,0,3,0}
};

for (int i = 0; i < 10; i++)  //Cria 10 linhas
{
    for (int j = 0; j < 10; j++) //Cria 10 colunas
    {
      printf("%d  ", tabuleiro[i][j]);  //imprime o tabuleiro usando o for
    }
    printf("\n");
}




}