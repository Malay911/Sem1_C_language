#include <stdio.h>
void main() {
    int num, i=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factors of %d are: ", num);
    while (i <= num) {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}
