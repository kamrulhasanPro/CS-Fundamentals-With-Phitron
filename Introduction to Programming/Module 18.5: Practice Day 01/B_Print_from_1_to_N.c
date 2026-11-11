#include<stdio.h>
void print1toN(int n, int i){
    printf("%d\n", i);
    if(i == n){
        return;
    }

    print1toN(n, i + 1);
}
int main(){
    int n;
    scanf("%d", &n);
    print1toN(n, 1);
    return 0;
}