#include<bits/stdc++.h>
using namespace std;

string plaindromCheck(int n, int arr[]){
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if(arr[i] != arr[j]){
            return "NO";
            
        }
    }

    return "YES"; 
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string isPlaindrom = plaindromCheck(n, arr);
    
    cout << isPlaindrom;
    return 0;
}