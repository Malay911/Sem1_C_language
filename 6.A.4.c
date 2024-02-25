#include<stdio.h>
void main(){
	int a,b;
	printf("Enter an integer number:");
	scanf("%d",&a);
	b=a%10;
	if(b%2==0){
		printf("Last digit is even");
	}
	else{
		printf("Last digit is odd");
	}
}
