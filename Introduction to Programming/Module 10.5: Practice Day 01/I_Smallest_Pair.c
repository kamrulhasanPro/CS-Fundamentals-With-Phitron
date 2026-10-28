#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int m;
        scanf("%d", &m);

        int arr[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
        }

        int i = 0;
        
        int minVal = __INT_MAX__;
        while (i != m)
        {
            int j = i + 1;
            // printf("j %d\n", j);
            for (int k = j; k < m; k++)
            {
                int value = arr[i] + arr[k] + k - i;
                // printf("%d\n", value);
                if(minVal > value){
                    minVal = value;
                }
            }

            i++;
        }
        
        printf("%d\n", minVal);
        
    }
    
    return 0;
}