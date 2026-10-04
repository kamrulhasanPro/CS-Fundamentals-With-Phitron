#include<stdio.h>
int main(){
    /*
        Syntax: 
            if(condition){
                // condition true than this block code execute
            } else {
                // condition false than this block code execute 
            }
    */

    // suppose if tk getar than or equals 100 than we are snacks bargar. others no sancks
    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("We are take snacks with bargar.");
    }else{
        printf("We aren't take snacks with bargar.");
    }
    return 0;
}