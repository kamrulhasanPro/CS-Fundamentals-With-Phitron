#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s", &s);
    int size = strlen(s);

    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if(s[i] != s[j]){
            printf("NO");
            return 0;
        }

        i++;
        j--;
    }
    printf("YES");

    // printf("%s", s);
    return 0;
}