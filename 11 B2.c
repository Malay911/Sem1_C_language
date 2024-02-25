#include<stdio.h>
void main(){
	int n,i,count=0,remainder;
	printf("Enter a number:");
	scanf("%d",&n);
	for(;n!=0;i++)
		{
			remainder=n%10;
		    count++;
		    n=n/10;
    }
    printf("%d",count);
}
