#include<stdio.h>
void main(){
	int m1,m2,m3,m4,m5;
	float per;
	printf("Enter marks:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/(float)5;
	if(per<=35){
		printf("Fail");
	}
	else if(per>35 && per<=45){
		printf("Pass class");
	}
	else if(per>45 && per<=60){
		printf("Second class");
	}
	else if(per>60 && per<=70){
		printf("First class");
	}
	else if(per>70){
		printf("Distinction");
	}
}
