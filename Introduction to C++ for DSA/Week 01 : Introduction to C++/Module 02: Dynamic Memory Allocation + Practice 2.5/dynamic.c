#include<stdio.h>
int *pointers;
void fun(){
    int g = 9;
    pointers = &g;
    printf("%p %p\n", &g, pointers); 
    return;
}

int main(){
    int x = 40;
    int *p = &x;

    printf("%p %p\n",&x, p);
    *p = 50;

    printf("%d %d\n", x, *p);

    fun();
    printf("%d", *pointers);
    return 0;
}