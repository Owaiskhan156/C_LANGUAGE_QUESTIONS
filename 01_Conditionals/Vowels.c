#include<stdio.h>

int main(){
	char ch;
	printf("Enter Character to check vowels or consonant ");
	scanf("%c", &ch);
	
	if(ch == 'a' || ch == 'A' ||ch == 'e'
	|| ch == 'E' || ch == 'i'|| ch == 'I'
	|| ch == 'o' || ch == 'O' || ch == 'u'||ch == 'U'){
		printf("Vowels");
	}else{
		printf("Consonant");
	}
}