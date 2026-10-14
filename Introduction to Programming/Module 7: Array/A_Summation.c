#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        scanf("%lld", &x);

        sum = sum + x;

    }

    if(sum < 0){
        sum = sum * (-1);
    }

    printf("%lld ", sum);
    
    return 0;
}