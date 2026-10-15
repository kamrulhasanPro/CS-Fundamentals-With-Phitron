#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);


    int positive_sum = 0, negative_sum = -0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if(x > 0){
            positive_sum += x;
        }else if (x < 0)
        {
            negative_sum += x;
        }
    }

    printf("%d %d", positive_sum, negative_sum);
    
    return 0;
}