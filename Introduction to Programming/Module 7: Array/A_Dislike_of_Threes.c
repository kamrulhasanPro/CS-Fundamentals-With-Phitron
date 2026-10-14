#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int k_th;
        scanf("%d", &k_th);

        int count = 0;
        int value = 0;
        while (count != k_th)
        {
            value++;
            if(value % 10 == 3 || value % 3 == 0){
                continue;
            }

            count++;
        }
        
        // while (count != k_th)
        // {   
        //     value++;

        //     if(value % 10 == 3 && value % 3 == 0){
        //         value++;
        //     }else if (value % 10 == 3){
        //         value++;
        //         if(value % 3 == 0){
        //             value++;
        //         }
        //     }else if (value % 3 == 0){
        //         value++;
        //         if(value % 10 == 3){
        //             value++;
        //         }
        //     }
            

        //     count++;
        // }

        printf("%d\n", value);
        
    }
    
    
    return 0;
}