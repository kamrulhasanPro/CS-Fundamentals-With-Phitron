#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Think my wayy
    /*
    n--;
    for(int i = 0; i <= n; i++){
        if(i >= n - i){
            break;
        };
        
        int tem = arr[i];
        arr[i] = arr[n - i];
        arr[n - i] = tem;
    }
    */

    // while condition way
    /*
    int i = 0, j = n-1;
    while (i < j)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        
        i++;
        j--;
    }
    */

    // for loop without break
    for(int i = 0, j = n-1; i < j; i++,j--){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}