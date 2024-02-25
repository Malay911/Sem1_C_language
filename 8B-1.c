#include <stdio.h>
#include <math.h>
void main(){
    int i = 0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while (i <= 9) {
        printf("%d %.2f\n", i, sqrt(i));
        i++;
    }
}
