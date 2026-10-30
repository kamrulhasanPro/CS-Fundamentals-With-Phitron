#include<stdio.h>
int main(){
    int n;
    scanf("%d ", &n);

    // int arr[n];
    // for (int i = n-1; i >= 0; i--)
    // {
    //     arr[i] = x % 10;
    //     x = x / 10;
    // }

    char arr[n+1];
    scanf("%s", arr);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - '0';
    }
    

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    
    

    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }
    
    printf("%d", sum);
    

    // printf("%d", n);
    return 0;
}