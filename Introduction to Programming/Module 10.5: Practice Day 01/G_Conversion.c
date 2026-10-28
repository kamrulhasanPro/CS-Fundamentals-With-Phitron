#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s", &s);

    int size = strlen(s);
    for(int i = 0; i < size; i++){
        if(s[i] >= 'a' && 'z' >= s[i]){
            printf("%c", s[i] - 32);
        }else if (s[i] >= 'A' && 'Z' >= s[i])
        {
            printf("%c", s[i] + 32);
        }else if(s[i] == ','){
            printf(" ");
        }
    }

    // printf("%s", s);
    return 0;
}