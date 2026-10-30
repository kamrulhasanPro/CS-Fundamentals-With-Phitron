#include<stdio.h>
#include<string.h>
int main(){
    char s[10000001];
    scanf("%s", s);
    // printf("%s", s);

    int alphabet[26] = {0};
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        alphabet[s[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(alphabet[i] != 0){

            printf("%c : %d\n", 97 + i, alphabet[i]);
        }
    }
    
    return 0;
}