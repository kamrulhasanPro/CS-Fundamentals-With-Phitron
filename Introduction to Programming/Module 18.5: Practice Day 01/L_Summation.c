#include<stdio.h>

void summation(int n, long long sum){
    long long int x;
    scanf("%lld", &x);
    sum += x;
    if(n == 1){
        printf("%lld", sum);
        return;
    }

    summation(n - 1, sum);
}

int main(){
    int n;
    scanf("%d", &n);

    summation(n, 0);
    return 0;
}