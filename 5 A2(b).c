#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter a:  ");
	scanf("%d",&a);
	printf("Enter b:  ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("New numbers: a=%d and b=%d",a,b);
}
