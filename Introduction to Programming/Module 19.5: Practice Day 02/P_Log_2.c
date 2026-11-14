#include<stdio.h>
#include<math.h>
void logPrint(long long n, int count){
    // printf("%lld", n);
    if(n / 2 == 0){
        printf("%d", count);
        return;
    }
    count++;
    logPrint(n / 2, count);
}

int main(){
    long long n;
    scanf("%lld", &n);

    logPrint(n, 0);
    return 0;
}