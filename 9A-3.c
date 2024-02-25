#include <stdio.h>
void main() {
    int x, y, i=1, product = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    while(i<=y){
        product*=x;
        i++;
	}
    printf("The product of %d and %d is %d\n", x, y, product);
}
