#include<stdio.h>
void sum2(int x){
    printf("%d\n", x + 2);
}

int main(){
    int x = 10;
    sum2(x); // pass x value

    printf("%d", x); // why isn't 12 after sum2? that's the problem because sum2 function not know this x memory address.

    return 0;
}