#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
     long long m;
     int a, b, c;
     scanf("%lld %d %d %d", &m, &a, &b, &c);

     long long threeMultiple = a * b * c;
    //  printf("%lld\n", threeMultiple);

      double missingNum = (double)m / threeMultiple;

        if((int)missingNum < missingNum && missingNum < (int)missingNum + 1 || missingNum < 0){
            missingNum = -1;
        }

     printf("%lld\n", (long long)missingNum);     
     
    //  printf("%lld %d %d %d\n", m, a, b, c);
    }
    
    return 0;
}