#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        long long factorial = 1;
        scanf("%d", &x);

        for (int j = 1; j <= x; j++)
        {
            factorial = factorial * j;
        }

        printf("%lld\n", factorial);
        
    }
    
    return 0;
}