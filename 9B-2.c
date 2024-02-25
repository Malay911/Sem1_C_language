#include <stdio.h>
void main() {
    int num, i, rem;
    char roman[1000];
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    i = 0;
    while (num > 0) {
        rem = num % 10;
        switch (rem) {
            case 1:
                roman[i++] = 'I';
                break;
            case 2:
                roman[i++] = 'I';
                roman[i++] = 'I';
                break;
            case 3:
                roman[i++] = 'I';
                roman[i++] = 'I';
                roman[i++] = 'I';
                break;
            case 4:
                roman[i++] = 'I';
                roman[i++] = 'V';
                break;
            case 5:
                roman[i++] = 'V';
                break;
            case 6:
                roman[i++] = 'V';
                roman[i++] = 'I';
                break;
            case 7:
                roman[i++] = 'V';
                roman[i++] = 'I';
                roman[i++] = 'I';
                break;
            case 8:
                roman[i++] = 'V';
                roman[i++] = 'I';
                roman[i++] = 'I';
                roman[i++] = 'I';
                break;
            case 9:
                roman[i++] = 'I';
                roman[i++] = 'X';
                break;
            case 10:
                roman[i++] = 'X';
                break;
        }
        num /= 10;
    }
    printf("The roman number is: %s\n", roman);
}