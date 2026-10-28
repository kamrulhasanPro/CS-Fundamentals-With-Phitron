#include <stdio.h>
int main()
{
    char s[10];
    printf("%d", s[6]);
    scanf("%s", &s);
    printf("%s\n", s);
    printf("%d", s[6]);

    return 0;
}