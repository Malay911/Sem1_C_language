#include <stdio.h>
void main() {
    int i = 1, sum = 0, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (i <= n) {
        if (i % 2 == 0) {
            sum -= i;
        } 
		else {
            sum += i;
        }
        i++;
    }
    printf("The sum of the series is %d\n", sum);
}
