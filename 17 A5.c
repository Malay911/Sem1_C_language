#include<stdio.h>
void main(){
	int n,i=0,*ptr;
	printf("Enter the number:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Element in the array are:");
	for(*ptr=arr;ptr<arr+n;ptr++){
		printf("%d",*ptr);
	}
}
