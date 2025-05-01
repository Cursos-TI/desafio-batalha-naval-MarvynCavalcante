#include <stdio.h>

#define SIZE 5

void exibirCoordenadas(int navioX[], int navioY[], int tamanho, const char *tipo) {
    printf("Coordenadas do navio %s:\n", tipo);
    for (int i = 0; i < tamanho; i++) {
        printf("(%d, %d)\n", navioX[i], navioY[i]);
    }
    printf("\n");
}

int main() {
    // Define os tamanhos dos navios
    int tamanhoNavioHorizontal = 3;
    int tamanhoNavioVertical = 4;

    // Define manualmente as posições dos navios
    int navioHorizontalX[] = {1, 1, 1};
    int navioHorizontalY[] = {1, 2, 3};

    int navioVerticalX[] = {3, 4, 5, 6};
    int navioVerticalY[] = {2, 2, 2, 2};

    // Exibe as coordenadas dos navios
    exibirCoordenadas(navioHorizontalX, navioHorizontalY, tamanhoNavioHorizontal, "horizontal");
    exibirCoordenadas(navioVerticalX, navioVerticalY, tamanhoNavioVertical, "vertical");

    return 0;
}