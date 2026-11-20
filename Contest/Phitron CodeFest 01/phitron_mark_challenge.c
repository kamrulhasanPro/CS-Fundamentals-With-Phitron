#include<stdio.h>
int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int totalMarks = 0;
    for (int i = 0; i < n-1; i++)
    {
        int x;
        scanf("%d", &x);
        totalMarks += x;
    }
    
    int avarageMark = totalMarks / n;
    if(k <= avarageMark){
        printf("0");
        return 0;
    }

    int totalNeedMark = n * k;
    int distance = totalNeedMark - totalMarks;
        if(m < distance){
            printf("-1");
        }else{
            printf("%d", distance);
        }
   
    // printf("%d", totalMarks);
    return 0;
}