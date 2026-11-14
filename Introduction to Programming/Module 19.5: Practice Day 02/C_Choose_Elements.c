#include<stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("i -> %d, j -> %d\n", arr[i], arr[j]);
            if(arr[i] < arr[j]){
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
        
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d \n", arr[i]);
    // }
    
    
    
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("%d", arr[i]);
        long long summation = sum + arr[i];
        if(sum < summation){
            sum = summation;
        }
        if(i == k-1) break;
    }

    printf("%lld", sum);
    
    return 0;
}