#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d", &n);

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // sort 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j =  i + 1; j < n; j++)
        {
            if(arr[i] > arr[j]){
                long long tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }

    int previus = arr[0];
    bool is_lucky = false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != previus){
            // printf("value -> %d, i -> %d\n", arr[i], i );
            if(i % 2 != 0){
                is_lucky = true;
            }
            break;
        }

        if(i == n - 1){
            if(i + 1 % 2 != 0){
                is_lucky = true;
            }
        }
    }

    if(is_lucky){
        printf("Lucky");
    }else{
        printf("Unlucky");
    }
    

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%lld", arr[i]);
    // }
    
    
    
    return 0;
}