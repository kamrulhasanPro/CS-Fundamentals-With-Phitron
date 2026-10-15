#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        // printf("%d %d %d\n", a, b, c);
        // toal circle value
        int TotalValue = abs((a - b)) * 2;
        // printf("%d total\n", TotalValue);
        
        if(TotalValue < a || TotalValue < b || TotalValue < c){
            printf("-1\n");
            continue;;
        }

        // a - b = distanse
        int distanse = a > b ? a - b : b - a;
        // printf("%d distance\n", distanse);
        int oppsite_value = c + distanse;

        if(TotalValue < oppsite_value){
            oppsite_value -= TotalValue;
        }
        
        printf("%d\n", oppsite_value);
    }
    
    return 0;
}