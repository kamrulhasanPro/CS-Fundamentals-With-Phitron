#include<stdio.h>            printf("j -> %d\n", arr[i]);

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // sorting
    for (int i = 0; i < n - 1; i++)
    {
        //  printf("i -> %d\n", arr[i]);

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
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}