#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int oddSum = 0;
        for (int j = (y > x ? x :y ) + 1; j < (y > x ? y :x) ; j++)
        {
            if(j % 2 != 0){
                oddSum += j;
            }
        }
        printf("%d\n", oddSum);
        

    }
    
    return 0;
}