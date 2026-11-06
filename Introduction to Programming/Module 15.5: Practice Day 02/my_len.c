#include<stdio.h>
int my_len(char s[]){
    int count = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
    
}
int main(){
    char s[11];
    scanf("%s", &s);

    int myLen = my_len(s);

    printf("%d", myLen);
    return 0;
}