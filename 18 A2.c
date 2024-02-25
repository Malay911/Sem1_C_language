#include<stdio.h>
int maxmin(int a,int b);
void main(){
	int a,b;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	printf("Maximun is %d and minimum is %d",maxmin(a,b));
}
int maxmin(int a,int b){
	if(a>b){
		return a,b;
	}
	else{
		return b,a;
	}
}
