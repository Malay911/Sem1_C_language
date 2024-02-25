#include <stdio.h>
#include <math.h>
void main() {
    float red, green, blue;
    float white, cyan, magenta, yellow, black;
    printf("Enter the RGB values (0-255): ");
    scanf("%f %f %f", &red, &green, &blue);

    if (red == 0 && green == 0 && blue == 0) {
        cyan = magenta = yellow = 0;
        black = 1;
    } else {
        red = red / 255;
        green = green / 255;
        blue = blue / 255;
        white = fmax(red, fmax(green, blue));
        cyan = (white - red) / white;
        magenta = (white - green) / white;
        yellow = (white - blue) / white;
        black = 1 - white;
    }

    printf("CMYK values: (%.6f, %.6f, %.6f, %.6f)\n", cyan, magenta, yellow, black);
}
