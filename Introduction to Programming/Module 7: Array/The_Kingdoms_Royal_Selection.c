#include<stdio.h>
int main(){
    int age, intelligence, physical, experience;
    scanf("%d %d %d %d", &age, &intelligence, &physical, &experience);


    if( age >= 30 && age <= 35 && age <= 100
        && intelligence >= 95  && intelligence <= 100
        && physical >= 90 && intelligence <= 100
        && experience >= 0 && experience <= 50
    ){
       printf("Selected");
       return 0;
    }else if(
        age >= 21 && age <= 35 && age <= 100
        && intelligence >= 80 && intelligence <= 100
        && physical >= 70 && physical <= 100
        && experience >= 2 && experience <= 50
    ){
        printf("Selected");
        return 0;
    }
        printf("Rejected");
    

    return 0;
}