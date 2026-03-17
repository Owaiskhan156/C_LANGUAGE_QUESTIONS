#include<stdio.h>

int main() {
    int number, reversed = 0, original, last_digit;

    printf("Enter Number to check palindrome or Not: ");
    scanf("%d", &number);

    original = number;

    while(number > 0){
        last_digit = number % 10;              
        reversed = reversed * 10 + last_digit; 
        number = number / 10;                  
    }

    if(original == reversed){
        printf("This number is a Palindrome: %d\n", original);
    } else {
        printf("This number is Not a Palindrome: %d\n", original);
    }

    return 0;
}