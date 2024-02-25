#include<stdio.h>
int factorial(int);
void main(){
	int num,val,n;
	printf("Enter a positive number");
	scanf("%d",&num);
	val=factorial(num);
	printf("Factorial is %d",val);
}
int factorial(int n){
	int val=1,i;
	for(i=1;i<=n;i++){
		val=val*n;
	}
	return val;
}
