#include<stdio.h>
int maxmin(int a,int b);
void main(){
	int a,b;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	printf("Sum is %d\n",add(a,b));
}
int add(int a,int b){
	return a+b;
}
