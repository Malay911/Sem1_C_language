#include<stdio.h>
int main(){
	int num,i=2;
	printf("Enter a number:");
	scanf("%d",&num);
	while(i<=num/2){
		if(num%i==0){
			printf("%d is not a prime number\n",num);
		}
        i++;
	}
	if(i==num/2){
	printf("%d is a prime number\n",num);
    }
    return 0;
}
