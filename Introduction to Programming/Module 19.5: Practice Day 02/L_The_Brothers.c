#include<stdio.h>
#include<string.h>
int main(){
    char f1[1000001], f2[1000001], s1[1000001], s2[1000001];
    scanf("%s %s %s %s", f1, s1, f2, s2);

    // printf("%s %s %s %s", f1, s1, f2, s2);

    // printf("%s%s", s1, s2);
    int a = strcmp(s1, s2);
    // printf("%d", a);
    if(!a){
        printf("ARE Brothers");
    }else{
        printf("NOT");
    }

    return 0;
}