#include<stdio.h>
int main(){
    int arr[2][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}};

    arr[1][1] = 10;

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
    }
    
    return 0;
}