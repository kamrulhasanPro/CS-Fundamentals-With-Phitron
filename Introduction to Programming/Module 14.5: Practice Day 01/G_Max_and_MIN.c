#include<stdio.h>
#include<limits.h>
void minMax(int arr[], int n){
    // minimum 
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // min
        if(arr[i] < min){
            min = arr[i];
        }

        // max
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("%d %d", min, max);
    
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    minMax(arr, n);
    return 0;
}