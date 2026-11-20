#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxDiff = INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
                int sub = arr[j] - arr[i];
                // printf("sub -> %d\n", sub);
                if(maxDiff < sub){
                    maxDiff = sub;
                }
        }
    }

    printf("%d", maxDiff);
    

    return 0;
}