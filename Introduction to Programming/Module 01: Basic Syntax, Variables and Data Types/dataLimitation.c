#include<stdio.h>
#include<limits.h>

int main(){
    // int limits
    printf("%d\n", __INT_MAX__);
    printf("%d\n", INT_MIN);

    // float limits
    printf("%ld\n", LONG_MAX); // long 4/8bytes linex=8bytes windows=4bytes
    printf("%lld\n", LLONG_MAX);
    printf("%ld\n", LLONG_MIN);
    printf("%lu\n", ULONG_MAX);

    // char limits
    printf("%d\n", UCHAR_MAX);
    printf("%d\n", CHAR_MIN);
    printf("%d\n", SCHAR_MAX);
    
    return 0;
}