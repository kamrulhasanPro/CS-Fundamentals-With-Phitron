#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);

    // 1. way
    // int firstDigit; 
    // for(int i = 1; i <= 4; i++){
    //     firstDigit = a % 10;
    //     a = a / 10;
    // }

    // another best way get first digit
    int firstDigit = a / 1000;

    if(firstDigit % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    
    return 0;
}