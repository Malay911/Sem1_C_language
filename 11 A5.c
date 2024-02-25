#include<stdio.h>
void main(){
	int n,i,a;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a*i;
	}
	printf("Factorial=%d",a);
}
