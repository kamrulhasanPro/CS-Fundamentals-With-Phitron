#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if(x < 0){
            x = x * (-1);
        }

        if(x < min){
            min = x;
        }
    }
    printf("%d ", min);
    
    return 0;
}