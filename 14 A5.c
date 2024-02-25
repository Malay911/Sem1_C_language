#include<stdio.h>
void main(){
	int i,n,count=0;
	float height[5],weight[5];
	printf("Enter height and weight of 5 person:\n");
	for(i=0;i<5;i++){
		printf("Person %d(height weight):",i+1);
        scanf("%f %f",&height[i],&weight[i]);
        if(height[i]>110 && weight[i]<50){
        	count++;
		}
	}
	printf("Number of person:%d\n",count);
}
