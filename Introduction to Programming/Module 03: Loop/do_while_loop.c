#include<stdio.h>
int main(){
    /*
    // the code minium run 1 because before check codition code 1execute;
        Syntax:
            do{
                // code
            }while(end_conditon);
    */
   int i = 1;
   do{
       printf("Count: %d\n", i);
       i++;
    }
    while (i<=20);
   
    return 0;
}