#include<stdio.h>

int main(){
    int unit;
    float bill;

    printf("Enter Your Electricity Units: ");
    scanf("%d", &unit);

    if(unit < 0){
        printf("Invalid Unit");
    }
    else if(unit <= 100){
        bill = unit * 10;
    }
    else if(unit <= 200){
        bill = (100 * 10) + (unit - 100) * 15;
    }
    else if(unit <= 300){
        bill = (100 * 10) + (100 * 15) + (unit - 200) * 20;
    }
    else{
        bill = (100 * 10) + (100 * 15) + (100 * 20) + (unit - 300) * 25;
    }

    printf("Your Electricity Bill is: %.2f", bill);

    return 0;
}