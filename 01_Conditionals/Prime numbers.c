#include<stdio.h>

int main() {
    int prime_number, i, isPrime = 1;

    printf("Enter your number to check its prime or not: ");
    scanf("%d", &prime_number);

    if(prime_number <= 1){
        isPrime = 0; 
    } else {
        for(i = 2; i < prime_number; i++){
            if(prime_number % i == 0){
                isPrime = 0; 
                break;       
            }
        }
    }

    if(isPrime == 1){
        printf("This Number is a Prime Number\n");
    } else {
        printf("This Number is Not a Prime Number\n");
    }

    return 0;
}