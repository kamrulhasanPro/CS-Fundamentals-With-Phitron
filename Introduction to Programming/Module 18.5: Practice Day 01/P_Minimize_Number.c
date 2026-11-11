#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int i = 0;
    while (1)
    {
        if(arr[i] % 2 != 0){
            break;
        }

        arr[i] = arr[i] / 2;

        if(i == n -1){
            count++;
            i = 0;
        }else{
            i++;
        }

    }
    
    printf("%d", count);
    return 0;
}