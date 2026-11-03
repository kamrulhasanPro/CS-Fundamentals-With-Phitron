#include<stdio.h>
#include<limits.h>
int maxVal(){
    return INT_MAX;
}

int sum(){
    int a, b;
    scanf("%d %d", &a, &b);

    return a+b;
}

int main(){
    // get int max value
    int intMaxValue = maxVal();
    printf("Int Max Range -> %d\n", intMaxValue);
    int sumValue = sum();

    printf("Sumation -> %d", sumValue);
    return 0;
}