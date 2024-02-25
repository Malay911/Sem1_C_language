#include<stdio.h>
#include<string.h>
void main(){
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	printf("Enter the element of first matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d ",&a[i][j]);
		}
	}
	printf("Enter the element of second matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d ",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=b[i][j]+a[i][j];
		}
	}
	printf("The resultant matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
