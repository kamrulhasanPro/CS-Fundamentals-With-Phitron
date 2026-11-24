#include<bits/stdc++.h>
using namespace std;
int *pointers;
void fun(){
    int *g = new int;
    *g = 18;
    pointers = g;
    // printf("%p %p\n", g, pointers); 
    // printf("%d %d\n", *g, *pointers); 
    cout << g << " " << pointers << endl;
    return;
}

int main(){
    // int x = 10;
    int *p = new int;

    *p = 12;

    fun();
    cout << pointers << " " << *pointers;

    
    return 0;
}