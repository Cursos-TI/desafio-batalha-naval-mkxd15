#include <stdio.h>

int main(){
    int colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //Criação do tabuleiro.
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        
    };

    //Colocação navio horizontal.
    for(int j = 3; j <= 5; j++){ 
        tabuleiro[3][j] = 3;    //Navio colocado na linha 4 e nas colunas 4 a 6. (no tabuleiro matriz corresponde a linha 3 e colunas 3 a 5.)
    }

    //Colocação navio vertical.
    for(int i = 5; i <= 7; i++){
        tabuleiro[i][7] = 3;    //Navio colocado nas linhas 6 a 8 e na coluna 8. (no tabuleiro matriz corresponde as linhas 5 a 7 e coluna 7.)
    }

    //Colocação dos navios em diagonal.
    for(int i = 0; i <= 2; i++){
        tabuleiro[i][i] = 3;    //Navio colocado nas linhas 1, 2 e 3 e nas colunas 1, 2 e 3.
    }

    for(int i = 2, j = 7; i <= 0, j <= 9; i--, j++){
        tabuleiro[i][j] = 3;    //Navio colocado nas linhas 1, 2 e 3 e nas colunas 8, 9 e 10.
    }

    //Impressão do tabuleiro.
    printf("TABULEIRO BATALHA NAVAL\n\n");

    for(int i = 0; i < 10; i++){
        printf(" %c", colunas[i]); //Printa as Letras das colunas.
    }
    
    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", i+1); //Printa a numeração das linhas.

        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); //Printa o tabuleiro em si.
        }
        printf("\n"); 
    }
}
