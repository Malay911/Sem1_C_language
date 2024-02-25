#include<stdio.h>
float simple_interest(float p,float r,float t){
	return (p*r*t)/10;
}
void main(){
	float principal,rate,time,interest;
	printf("Enter principal amount:");
	scanf("%f",&principal);
	printf("Enter rate:");
	scanf("%f",&rate);
	printf("Enter time:");
	scanf("%f",&time);
	interest=simple_interest(principal,rate,time);
	printf("Simple interest=%.2f\n",interest);
}
