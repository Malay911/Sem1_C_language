#include<stdio.h>
void main(){
	char ch;
	print("Enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("Character is uper case");
	}
	else if(ch>='a' && ch<='z'){
		printf("Character is lower case");
	}
	else if(ch>='0' && ch<='9'){
		printf("Character is digit");
	}
	else{
		printf("Character is speial symbol");
	}
}
