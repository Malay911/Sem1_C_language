#include<stdio.h>
#include<string.h>
void main(){
	int n,i,arr[100],count=0;
	printf("Enter a number of elements in a array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%3==0){
			count++;
		}
	}
	printf("Total number  of elements divisible by 3:%d\n",count);
}
