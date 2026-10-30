#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int m = 1;
    while (n--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int toatal_work = m1 * d;
        float days = (float)toatal_work / (m1+m2);
        float les_days = d - days;

        if(les_days > (int)les_days && les_days < (int)les_days + 1){
            les_days++;
        }

        printf("%d\n", (int)les_days);
    }
    
    return 0;
}