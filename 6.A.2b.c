#include<stdio.h>
void main(){
	float BS,HRA,DA,GS;
	printf("Enter your basic salary:");
	scanf("%f",&BS);
	if (BS>30000){
		HRA=BS*0.2;
		DA=BS*0.8;
		GS=BS+HRA+DA;
		printf("Gross Salary is:%f",GS);
	}
	else if(BS>=20000){
		HRA=BS*0.25;
		DA=BS*0.9;
		GS=BS+HRA+DA;
		printf("Gross Salary is:%f",GS);
	}
	else if(BS>=10000){
		HRA=BS*0.3;
		DA=BS*0.95;
		GS=BS+HRA+DA;
		printf("Gross Salary is:%f",GS);
	}
}
