#include<stdio.h>
#include<string.h>
int main(){
    char s[10001];
    scanf("%s", s);

    int len = strlen(s);
    
    int alphabet[26] = {0};
    for (int i = 0; i < len; i++)
    {
        // printf("%d %c\n", i, s[i]);
        alphabet[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(alphabet[i] != 0){
            printf("%c - %d\n",i + 97, alphabet[i]);
        }
    }
    
    return 0;
}