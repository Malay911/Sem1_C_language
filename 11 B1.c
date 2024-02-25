#include<stdio.h>
void main(){
	int n,i,a=0,c,b=1;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=0;i<=n;i++){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
