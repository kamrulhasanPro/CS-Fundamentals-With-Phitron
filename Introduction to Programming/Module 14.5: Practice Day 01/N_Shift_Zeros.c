#include<stdio.h>

void shift(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            printf("%d ", arr[i]);
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            printf("%d ", arr[i]);
        }
    }
    
    return;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
    for (int i = 0; i < n; i++)
    {
        // if(arr[i] == 0 && i < n - 1 - i){
        //     if(arr[n-1-i] != 0 ){
        //         arr[i] = arr[n-i-1];
        //         arr[n-i-1] = 0; 
        //     }
        // }


        // if(arr[i] == 0){
        //     continue;
        // }

        // for (int j = i - 1; j >= 0; j++)
        // {
        //     if(arr[j] == 0){
        //         int tem = arr[j + 1];
        //         arr[j + 1] = arr[j];
        //         arr[j] = tem;

        //     }
            
        // }

        // if(arr[i] == 0){
        //     for (int j = i; j < n - 1; j++)
        //     {
        //         arr[j] = arr[j + 1];
        //     }
        //     arr[n - 1] = 0;
        // }
        
    }
    */

    // shift(arr, n);
    int w = 0;
    for (int i = 0; i < n; i++)
    {
        
        if(arr[i] != 0 && w != i){
            int tem = arr[w];
            arr[w] = arr[i];
            arr[i] = tem;
            // printf("i => %d\n", arr[i]);
        }

        if(arr[w] != 0){
            w++;
            // printf("w => %d\n", arr[w]);
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}