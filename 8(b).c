#include<stdio.h>
void main(){
	int a,b;
	printf("Enter a:  ");//5
	scanf("%d",&a);
	printf("Enter b:  ");//7
	scanf("%d",&b);
	a=a+b;//a=5+7=12
	b=a-b;//b=12-7=5
	a=a-b;//a=12-5=7
	printf("New numbers: a=%d and b=%d",a,b);//a=7,b=5
}
