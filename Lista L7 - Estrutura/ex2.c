#include <stdio.h>

// Definindo uma estrutura para representar um pixel RGB
typedef struct {
    int R, G, B;
} PixelRGB;

// Definindo uma estrutura para representar um pixel YCbCr
typedef struct {
    int Y, Cb, Cr;
} PixelYCbCr;

//Protótipo da função
PixelYCbCr converterRGBparaYCbCr(PixelRGB rgb);

int main() {
    PixelRGB pixelsRGB[3][3];
    PixelYCbCr pixelsYCbCr[3][3];

    printf("Digite os valores RGB dos pixels:\n");

    // Loop para preencher a matriz de pixels RGB
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Pixel (%d, %d):\n", i, j);
            printf("R: ");
            scanf("%d", &pixelsRGB[i][j].R);
            printf("G: ");
            scanf("%d", &pixelsRGB[i][j].G);
            printf("B: ");
            scanf("%d", &pixelsRGB[i][j].B);
        }
    }

    printf("\nMatriz de pixels RGB:\n");

    // Exibindo a matriz de pixels RGB
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("(%d, %d, %d) ", pixelsRGB[i][j].R, pixelsRGB[i][j].G, pixelsRGB[i][j].B);
        }
        printf("\n");
    }

    printf("\nMatriz de pixels YCbCr:\n");

    // Convertendo e exibindo a matriz de pixels YCbCr
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            pixelsYCbCr[i][j] = converterRGBparaYCbCr(pixelsRGB[i][j]);
            printf("(%d, %d, %d) ", pixelsYCbCr[i][j].Y, pixelsYCbCr[i][j].Cb, pixelsYCbCr[i][j].Cr);
        }
        printf("\n");
    }

    return 0;
}
// Função para converter um pixel RGB para YCbCr
PixelYCbCr converterRGBparaYCbCr(PixelRGB rgb) {
    PixelYCbCr ycbcr;

    // Fórmulas de conversão para YCbCr
    ycbcr.Y = (16 + rgb.R * 64 + rgb.R * 2 + rgb.G * 128 + rgb.G + rgb.B * 16 + rgb.B * 8) / 256;
    ycbcr.Cb = 128 + (- (rgb.R * 32 + rgb.R * 4 + rgb.R * 2) - (rgb.G * 64 + rgb.G * 8 + rgb.G * 2) + (rgb.B * 128) - (rgb.B * 16)) / 256;
    ycbcr.Cr = 128 + ((rgb.R * 128 - rgb.R * 16) - (rgb.G * 64 + rgb.G * 32 - rgb.G * 2) - (rgb.B * 16 + rgb.B * 2)) / 256;

    return ycbcr;
}