#include<stdio.h>
#include<string.h>
void main(){
	int arr1[100],arr2[100],i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter a element in array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++){
		arr2[i]=arr1[i];
	}
	printf("Elements of new array are:");
	for(i=0;i<n;i++){
		printf("%d",arr2[i]);
	}
}
