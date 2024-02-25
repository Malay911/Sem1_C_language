#include<stdio.h>
void printArray(int arr[],int start,int len){
	if(start>=len){
		return;
	}
	print("%d",arr[start]);
	printArray(arr,start+1,len);
}
void main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	printArray(arr,0,n);
}
