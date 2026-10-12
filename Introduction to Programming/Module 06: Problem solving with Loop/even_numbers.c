#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);

    if(x == 1){
        printf("-1");
    }

    for (int i = 2; i <= x; i += 2)
    {
        printf("%d\n", i);
    }
    
    return 0;
}