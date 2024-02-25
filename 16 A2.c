#include<stdio.h>
#include<string.h>
void main(){
	int i,j,arr[3][3],positive=0,negative=0,zero=0,n;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (arr[i][j]>0){
				positive++;
			}
			else if(arr[i][j]<0){
				negative++;
			}
			else{
				zero++;
			}
		}
	}
	printf("Positive:%d\n",positive);
	printf("Negative:%d\n",negative);
	printf("Zero:%d\n",zero);
}
