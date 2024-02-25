#include<stdio.h>
void main(){
	int num,reverse=0,digit;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0){
		digit=num%10;
		reverse=reverse*10+digit;
		num/=10;
	}
	printf("The number in reverse order is:%d",reverse);
}
