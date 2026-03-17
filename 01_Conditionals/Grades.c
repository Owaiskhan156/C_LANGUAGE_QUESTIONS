#include<stdio.h>

int main(){
	int number;
	printf("Enter your numbers to check your grades : ");
	scanf("%d", &number);
	
	if(number < 0 || number > 100){
		printf("Invalid Number");
	}else if(number >= 90){
		printf("Your Grade is A1");
	}else if(number >= 80){
		printf("Your Grade is A");
	}else if(number >= 70){
		printf("Your Grade is B");
	}else if(number >= 60){
		printf("Your Grade is C");
	}else if(number >= 50){
		printf("Your Grade is D");
	}else{
		printf("Fail");
	}
	return 0;
}