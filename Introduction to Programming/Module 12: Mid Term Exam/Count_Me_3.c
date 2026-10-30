#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[10001];
        scanf("%s", s);
        int len = strlen(s);
        int small_count = 0, capital_count = 0, digit_count = 0;
        
        for (int i = 0; i < len; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z'){
                small_count++;
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                capital_count++;
            }else{
                digit_count++;
            }
        }

        printf("%d %d %d\n", capital_count, small_count, digit_count);
        
    }
    
    
    return 0;
}