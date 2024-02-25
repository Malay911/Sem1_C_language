#include<stdio.h>
void main(){
	int i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter a number:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Normal order:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\nReverse Order:");
	for(i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
}
