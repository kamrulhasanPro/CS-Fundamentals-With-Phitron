#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // inpsert index and valude
    int ind, val;
    scanf("%d %d", &ind, &val);

    int sizeOutside = sizeof(arr);
    printf("SizeOutside: %d\n", sizeOutside);

    /*
    for (int i = n + 1 - 1; i >= 0 ; i--) // +1 -> increment 1 for inseart a new vlaue, and -1 for manage index 0-n;
    {
        if(i == ind){
            arr[i] = val;
            break;
        }else if(i > ind){
            arr[i] = arr[i - 1];
        }
    }
    */

    // this the another easy logic solution
    for (int i = n; i >= ind + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[ind] = val;
    

    int sizeInside = sizeof(arr)  ;
    printf("SizeInside: %d\n", sizeInside);


    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}