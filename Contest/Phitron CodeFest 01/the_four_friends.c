#include<stdio.h>
int main(){
    int Rahim, Karim, Sakib, Nabil;
    scanf("%d %d %d %d", &Rahim, &Karim, &Sakib, &Nabil);

    
    // int highestScore = Rahim;
    // char firstLatter = 'R';

    // // highest score
    // if(highestScore < Karim ){
    //     highestScore = Karim;
    //     firstLatter = 'K';
    // }else if (highestScore < Sakib)
    // {
    //     highestScore = Sakib;
    //     firstLatter = 'S';
    // }else if (highestScore < Nabil)
    // {
    //     highestScore = Nabil;
    //     firstLatter = 'N';
    // }

    // // printf("%d", highestScore);

    // // count higestScore
    // int count = 0;
    // if(highestScore == Rahim) count++;
    // if(highestScore == Karim) count++;
    // if(highestScore == Sakib) count++;
    // if(highestScore == Nabil) count++;
    
    // if(count != 1){
    //     printf("Tie");
    // }else{
    //     if(firstLatter == 'R') printf("Rahim");
    //     else if(firstLatter == 'K') printf("Karim");
    //     else if(firstLatter == 'S') printf("Sakib");
    //     else if(firstLatter == 'N') printf("Nabil");
    // }

    int scores[4] = {Rahim, Karim, Sakib, Nabil};
    
    // sort 
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if(scores[i] > scores[j]){
                int tem = scores[i];
                scores[i] = scores[j];
                scores[j] = tem;
            }
        }
        
    }

    
    if(scores[3] == scores[2]){
        printf("Tie");
    }else{
        if(scores[3] == Rahim) printf("Rahim");
        else if(scores[3] == Karim) printf("Karim");
        else if(scores[3] == Sakib) printf("Sakib");
        else if(scores[3] == Nabil) printf("Nabil");
        
    }
    
    
    
    return 0;
}