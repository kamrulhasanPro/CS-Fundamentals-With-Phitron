#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // sort value
    for (int i = 0; i < n - 1; i++)
    {
        // printf("i -> %d\n", arr[i]);

        for (int j = i + 1; j < n; j++)
        {
            // printf("j -> %d\n", arr[j]);
            if(arr[i] > arr[j]){
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
        
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != arr[i + 1]){
           count++;
        }
    }
    
    printf("%d", count);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    
    
    
    return 0;
}