#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int divided_2_count = 0;
    int divided_3_count = 0;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0){
            divided_2_count++;
        }else if(arr[i] % 3 == 0){
            divided_3_count++;
        }
    }
    
    printf("%d %d", divided_2_count, divided_3_count);
    
    return 0;
}