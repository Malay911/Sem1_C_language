#include<stdio.h>
void main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=4;j++){
			if(i%2!=0){
				printf("* ");
			}
			else if(j%2==0){
				printf("* ");
				
			}
		}
		printf("\n");
	}
}
