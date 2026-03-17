#include<stdio.h>

int main(){
	int Year;
	printf("Enter Year To Check Its Leap Year or not ");
	scanf("%d", &Year);
	if((Year % 4 == 0 && Year % 100 !=0) || (Year % 400 == 0)){
		printf("Leap Year");
	}else {
		printf("Not a leap Year");
	}
}