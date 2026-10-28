#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char x[101];
        scanf("%s", &x);

        int szie = strlen(x);

        if(szie > 10){
            printf("%c%d%c\n", x[0],szie-2,x[szie-1]);
            continue;
        }

        printf("%s\n", x);
    }
    return 0;
}