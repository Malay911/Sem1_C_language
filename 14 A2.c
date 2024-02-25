#include<stdio.h>
void main(){
	int n,i,poscount=0,negcount=0,zerocount=0;
	printf("Enter a number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d number:",arr[n]);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			poscount++;
		}
		else if(arr[i]<0){
		
			negcount++;
		}
		else{
			zerocount++;
		}
	}
	printf("Number of positive numbers:%d\n",poscount);
	printf("Number of negative numbers:%d\n",negcount);
	printf("Number of zero:%d\n",zerocount);
}
