#include<stdio.h>
int factorial(int n, int i, long long int factNum)
{

    if(i == n){
        printf("%lld", factNum * i);
        return;
    }

    factorial(n, i + 1, factNum * i);
}
int main(){
    int n;
    scanf("%d", &n);

    factorial(n, 1, 1);
    return 0;
}