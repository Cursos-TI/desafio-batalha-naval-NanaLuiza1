#include <stdio.h>

#define AGUA 0
#define BARCO 3



void imprimirTabuleiro(int tabuleiro[10][10]);
void adicionarBarco(int tabuleiro[10][10], int linha, int coluna, int tamanho, char direcao);

int main() {

    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com água (0)



    // Adicionando barcos nas direções diferentes
    //1 = Vertical, 2 = Horizontal, 3 = Tamanho
    adicionarBarco(tabuleiro, 0, 3, 3, 'H'); // Submarino (horizontal)   
    adicionarBarco(tabuleiro, 5, 5, 3, 'H'); // Destroyer (horizontal)
    adicionarBarco(tabuleiro, 7, 2, 3, 'V'); // Destroyer (vertical)
    adicionarBarco(tabuleiro, 1, 1, 3, 'D'); // Barco na diagonal ↘️
    adicionarBarco(tabuleiro, 6, 8, 3, 'E'); // Barco na diagonal ↙️

    imprimirTabuleiro(tabuleiro);

    return 0;
}

void imprimirTabuleiro(int tabuleiro[10][10]) {
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c  ", linhas[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro[i][j]); // Exibe os valores 0 (água) e 3 (barco)
        }
        printf("\n");
    }
}

//BARCOS

void adicionarBarco(int tabuleiro[10][10], int linha, int coluna, int tamanho, char direcao) {
    if (direcao == 'H') { // Horizontal
        for (int j = 0; j < tamanho; j++) {
            if (coluna + j < 10) { 
                tabuleiro[linha][coluna + j] = BARCO;
            }
        }
    } 
    else if (direcao == 'V') { // Vertical
        for (int i = 0; i < tamanho; i++) {
            if (linha + i < 10) { 
                tabuleiro[linha + i][coluna] = BARCO;
            }
        }
    } 
    else if (direcao == 'D') { // Diagonal ↘️ (para baixo e para a direita)
        for (int k = 0; k < tamanho; k++) {
            if (linha + k < 10 && coluna + k < 10) { 
                tabuleiro[linha + k][coluna + k] = BARCO;
            }
        }
    } 
    else if (direcao == 'E') { // Diagonal ↙️ (para baixo e para a esquerda)
        for (int k = 0; k < tamanho; k++) {
            if (linha + k < 10 && coluna - k >= 0) { 
                tabuleiro[linha + k][coluna - k] = BARCO;
            }
        }
    }
}