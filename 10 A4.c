#include<stdio.h>
void main(){
	int num,digit,reverse;
	printf("Enter a number: ");
    scanf("%d",&num);
    printf("The digits of the number are: ");
    reverse=0;
    while(num!=0){
    	digit=num%10;
    	reverse=reverse*10+digit;
    	num/=10;
	}
	while(reverse!=0){
		printf("%d",reverse%10);
		reverse/=10;
	}
}
