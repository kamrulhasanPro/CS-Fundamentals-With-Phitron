#include<stdio.h>
int main(){
    /*
        Syntax: 
            if(condition){
                // true ==> execute
            }else if(condition){
                // true ==> execute
            }else{
                // false ==> execute
            }
        you can use multiple else if(condition).
    */

    // suppose if i have equals or gretar than 100tk in my pocket than we are buy bargar or if 50tk than buy chiken or if 20tk than buy chip if no have money so otherwise not buy anything.
    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("Buy Bargar.");
    }else if(tk >= 50){
        printf("Buy Chiken.");
    }else if(tk >= 20){
        printf("Buy Chip.");
    }else{
        printf("willn't anything buy.");
    }
    
    return 0;
}