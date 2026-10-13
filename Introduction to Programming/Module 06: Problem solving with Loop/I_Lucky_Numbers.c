#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);

    int firstDigit = a / 10;
    int lastDigit = a % 10;

    // if(lastDigit == 0){
    //     printf("YES");
    //     return 0;
    // }

    if( lastDigit % firstDigit == 0 || firstDigit % lastDigit == 0 ){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}