#include<stdio.h>

void digit_print(int remainder){    
    if(remainder == 0){
        return;
    }

    digit_print(remainder / 10);
    int mod = remainder % 10;
    printf("%d ", mod);
    
}

void testCase(int n){
    int value;
    scanf("%d", &value);

    if(value == 0) printf("0");
    digit_print(value);
    printf("\n");

    if(n == 1){
        return;
    }

    testCase(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);

    testCase(n);
    return 0;
}