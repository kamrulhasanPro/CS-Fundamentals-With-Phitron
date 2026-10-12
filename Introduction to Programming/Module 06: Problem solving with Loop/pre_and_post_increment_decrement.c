#include<stdio.h>
// int main(){
//     int x = 10;
//     int y = x++; // before kepp x value after than increment so y = 10; than post increment x = 11;
//     int z = ++y; // before pre increment after than y value of z; so z = 11 and y = 11
//     printf("%d\n", z++); // before print z value than z increnment ; so z print value 11; than increment value 12;

//     return 0;
// }

#include<stdio.h>
int main(){
    int x = 10;
    x--;
    printf("%d", x--); // first exute x value 9; than decrement x value 8;
    
    return 0;
}