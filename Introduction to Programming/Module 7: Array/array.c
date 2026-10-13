#include<stdio.h>
int main(){

    /*
        array declare syntax:
            date_type variable_name[size] = {elements};
    */

    // index is element number serial . and index start from 0 to last size; 
    int num[5] = {10, 20, 30, 40, 50};
    printf("%d\n", num[0]); // print 0 iindex 10

    int ar[3];
    ar[2] = 15;
    ar[0] = 32;
    ar[1] = 13;
    printf("%d", ar[2]); // expact 15
    return 0;
}