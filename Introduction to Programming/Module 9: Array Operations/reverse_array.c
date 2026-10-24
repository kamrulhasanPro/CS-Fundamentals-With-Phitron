#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    n--;
    for(int i = 0; i <= n; i++){
        printf("%d\n", i);
        if(i == n - i || n - i < i){
            break;
        };

        int tem = arr[i];
        arr[i] = arr[n - i];
        arr[n - i] = tem;
    }

    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}