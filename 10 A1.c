#include<stdio.h>
void main(){
	int num,firstdigit,lastdigit,sum;
	printf("Enter a number:");
	scanf("%d",&num);
	lastdigit=num%10;
	firstdigit=num;
	while(firstdigit>=10){
		firstdigit=firstdigit/10;
	}
	sum=firstdigit+lastdigit;
	printf("The sum first and last digit is %d\n",sum);
}
