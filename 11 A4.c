#include<stdio.h>
void main(){
    int x,y,i,a=1;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
    	a=a*x;
	}
	printf("Result=%d",a);
}
