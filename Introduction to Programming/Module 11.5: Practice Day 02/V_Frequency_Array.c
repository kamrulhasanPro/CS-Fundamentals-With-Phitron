#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    int freq_arr[1000001] = {0};
    // for (int i = 1; i <= m; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(arr[j] == i){
    //             count++;
    //         }
    //     }
    //     freq_arr[i-1] = count;
    // }
    // printf("%d", freq_arr[0]);
    for (int i = 0; i < n; i++)
    {
        freq_arr[arr[i] - 1] += 1;
    }
    

    for (int i = 0; i < m; i++)
    {
        // printf("%d -> %d\n", i+1, freq_arr[i]);
        printf("%d\n", freq_arr[i]);
    }
    
    
    return 0;
}