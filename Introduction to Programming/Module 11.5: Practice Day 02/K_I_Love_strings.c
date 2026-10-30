#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char x[101], y[101];
        scanf("%s %s", &x, &y);

        /*
        int i = 0;
        while (1){
            if(x[i] == '\0' && y[i] == '\0'){
                break;
            }else if(x[i] == '\0'){
                for (int j = i; j < strlen(y); j++)
                {
                    printf("%c", y[j]);
                }
                break;
            }else if (y[i] == '\0')
            {
                for (int j = i; j < strlen(x); j++)
                {
                    printf("%c", x[j]);
                }
                break;
            }else{
                printf("%c%c", x[i], y[i]);
                i++;
            }  
        }
        
        putchar('\n');
        */
        
        
        /*
        int sizeX = strlen(x), sizeY = strlen(y);
        int condition = sizeX > sizeY ? sizeX : sizeY;
        // printf("%d", condition);
        for (int i = 0; i < condition; i++)
        {
            if(condition == sizeX ? y[i] == '\0': x[i] == '\0'){
                for (int j = i; j < (condition == sizeX ? sizeX : sizeY); j++)
                {
                    printf("%c", condition == sizeX ? x[j] : y[j]);
                }
                
                //  printf("%c", sizeX > sizeY ? x[i] : y[i] );   
                break;;
            }
            printf("%c%c", x[i], y[i]);
        }
        putchar('\n');
        */

        int sizeX = strlen(x), sizeY = strlen(y);
        for (int i = 0; i < sizeX && i < sizeY; i++)
        {
            printf("%c%c", x[i], y[i]);
        }

        if(sizeX < sizeY){
            for (int i = sizeX; i < sizeY; i++)
            {
                printf("%c", y[i]);
            }
        }else{
            for (int i = sizeY; i < sizeX; i++)
            {
                printf("%c", x[i]);
            }
        }

        putchar('\n');
        
    }
    
    return 0;
}