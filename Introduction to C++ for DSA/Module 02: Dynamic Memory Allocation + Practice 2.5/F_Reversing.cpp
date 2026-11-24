#include<bits/stdc++.h>
using namespace std;

void swapFn(int n, int arr[]){
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int x = 2, y = 1;
    swapFn(n, arr);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
    
    return 0;
}