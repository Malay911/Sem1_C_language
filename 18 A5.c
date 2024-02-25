#include<stdio.h>
void swap_value(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	printf("Inside swap_value function:a %d,b=%d\n",a,b);
}
void swap_reference(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void main(){
	int num1,num2;
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,&num2);
	printf("%d",swap_value(&num1,&num2));
	printf("%d",swap_reference(&num1,&num2));
}
