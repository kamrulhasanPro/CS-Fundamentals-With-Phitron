#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minElement = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if(minElement > arr[i]){
            minElement = arr[i];
            minIndex = i;
        }
    }
    
    printf("%d %d", minElement, minIndex + 1);
    
    return 0;
}