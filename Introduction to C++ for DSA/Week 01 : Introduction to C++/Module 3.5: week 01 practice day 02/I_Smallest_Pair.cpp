#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        long long smallestPair = INT_MAX;
        for (int i = 0; i < n; i++)
        {
          for (int j = i + 1; j < n; j++)
          {
              long long sum = arr[i] + arr[j] + (j - i);
            //   cout << arr[i] << "+" << arr[j] << "+" << j << '-' << i << "=" << sum << endl;
              smallestPair = min(sum, smallestPair);
          }
        }
        
        cout << smallestPair << endl;
    }
    
    return 0;
}