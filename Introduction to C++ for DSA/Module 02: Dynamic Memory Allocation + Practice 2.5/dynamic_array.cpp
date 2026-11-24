#include<bits/stdc++.h>
using namespace std;

int* fun(){
        int *arr = new int[5];
        
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
        

        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        
        return arr;
}

int main(){
    // stack memory approach
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    
    // dynamic memory approach
    // int *arr = new int[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    
    
    int *p = fun();

    cout << p << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    
    
    return 0;
}