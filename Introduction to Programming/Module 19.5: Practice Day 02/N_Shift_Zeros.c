#include<stdio.h>
void siftZero(int arr[], int n){
    int w = 0;
    for (int r = 1; r < n; r++)
    {
        if(arr[w] != 0){
            w++;
        }

        if(w != r && arr[r] != 0){
            arr[w] = arr[r];
            arr[r] = 0;
        }
    }
    
}
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    siftZero(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}