#include<stdio.h>
#include<limits.h>
void maxValue(long long arr[], int n, long long int maxNum){
    if(arr[n] > maxNum){
        maxNum = arr[n];
    }

    if(n == 0){
        printf("%lld", maxNum);
        return;
    }

    maxValue(arr, n - 1, maxNum);
}

int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%lld ", arr[i]);
    // }
    
    long long int maxNum = INT_MIN;
    maxValue(arr, n - 1, maxNum);
    return 0;
}