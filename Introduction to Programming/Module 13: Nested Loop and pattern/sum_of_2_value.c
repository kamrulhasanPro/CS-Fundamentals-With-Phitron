#include<stdio.h>
int main(){
    int n, expacted;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &expacted);
    for (int i = 0; i < n - 1; i++)
    {
        int right = 0;
        // printf("%d\n", arr[i]);
        for (int j = i + 1; j < n; j++)
        {
            // printf("j => %d\n", arr[j]);
            if(arr[i] + arr[j] == expacted){
                printf("Final -> %d + %d = %d", arr[i], arr[j], arr[i] + arr[j]);
                right = 1;
            }
        }

        if(right){
            break;
        }
    }
    
    
    return 0;
}