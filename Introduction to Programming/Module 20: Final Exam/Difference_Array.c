#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arrayA[n], arrayB[n], arrayC[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            arrayA[i] = x;
            arrayB[i] = x;
        }

        // sort array of b
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(arrayB[i] > arrayB[j]){
                    int tem = arrayB[i];
                    arrayB[i] = arrayB[j];
                    arrayB[j] = tem;
                }
            }
        }

        // make array of c
        for (int i = 0; i < n; i++)
        {
            arrayC[i] = abs(arrayA[i] - arrayB[i]);
        }
        
        
        // print array c
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arrayC[i]);
        }

        printf("\n");
    }
    
    return 0;
}