#include<stdio.h>
void main(){
	int a,b;
	char n;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter sign:");
	scanf(" %c",&n);
	printf("Enter b:");
	scanf("%d",&b);
	if(n=='+'||n=='-'||n=='*'||n=='/'){
		if(n=='+'){
			printf("Addition:%d",a+b);
		}
		else if(n=='-'){
			printf("Subtraction:%d",a-b);
		}
		else if(n=='*'){
			printf("Multiplication:%d",a*b);
		}
		else if(n=='/'){
			printf("Division:%d",a/b);
        }
        else{
        	printf("Invalid");
		}
	}
}
