#include<stdio.h>
void sum2(int *ptr){ // store address in this pointer variable
    *ptr += 2; // dereference this addreess than manage the x value;
    printf("%d\n", *ptr);
}

int main(){
    int x = 10;
    sum2(&x); // pass the x variable address

    printf("%d", x); // now all is correct print 12;
    return 0;
}