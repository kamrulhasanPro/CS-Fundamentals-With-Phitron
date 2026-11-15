#include<stdio.h>
#include<limits.h>

// void maxNumber(long long arr[], int n, long long max){
//     if(max < arr[n]){
//         max = arr[n];
//     }

//     if(n == 0){
//         printf("%lld", max);
//         return;
//     }
//     maxNumber(arr, n - 1, max);
// }

int maxNumber(long long arr[], int n, int i){
    // base case
    if(i == n-1){
        return arr[i];
    }
    
    // recursive call
    int tem_max = maxNumber(arr, n, i + 1);

    // logical returen
    if(tem_max>arr[i]){
        return tem_max;
    }

    return arr[i];
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
    // maxNumber(arr, n - 1, max);
    int maximum = maxNumber(arr, n, 0);
    
    printf("%d", maximum);
    return 0;
}