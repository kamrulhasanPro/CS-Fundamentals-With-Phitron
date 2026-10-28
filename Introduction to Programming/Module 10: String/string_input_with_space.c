#include<stdio.h>
#include<string.h>
int main(){
    char s[50], j[30];
    // gets(s);
    // gets(j);

    fgets(s,25,stdin);
    fgets(j,20,stdin);

    printf("%s%s", s, j);
    return 0;
}