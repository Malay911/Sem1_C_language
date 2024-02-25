#include<stdio.h>
float max_of_three(float num1,float num2,float num3){
	float max=num1;
	if(num1>max){
		max=num1;
	}
	else if(num2>max){
		max=num2;
	}
	else if(num3>max){
		max=num3;
		return max;
	}
}
void main(){
	float num1,num2,num3,max;
	printf("Enter three number:");
	scanf("%f %f %f",&num1,&num2,&num3);
	max=max_of_three(num1,num2,num3);
	printf("Maximum=%.2f\n",max);
}
