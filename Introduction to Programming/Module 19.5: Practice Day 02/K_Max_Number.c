#include<stdio.h>
#include<limits.h>

void maxNumber(long long arr[], int n, long long max){
    if(max < arr[n]){
        max = arr[n];
    }

    if(n == 0){
        printf("%lld", max);
        return;
    }
    maxNumber(arr, n - 1, max);
}

int main(){
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    
    long long max = INT_MIN;
    maxNumber(arr, n - 1, max);
    return 0;
}