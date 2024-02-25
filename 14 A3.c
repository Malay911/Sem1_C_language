#include<stdio.h>
void main(){
	int i,n,evencount=0,oddcount=0;
	printf("Enter a number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter a number:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			evencount++;
		}
		else{
			oddcount++;
		}
	}
	printf("Even number:%d\n",evencount);
	printf("Odd number:%d\n",oddcount);
}
