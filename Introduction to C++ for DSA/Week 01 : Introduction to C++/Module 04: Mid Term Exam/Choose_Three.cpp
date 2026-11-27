#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool isCorrect = false;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    // cout << "i " << arr[i] << " j " << arr[j] << " k " << arr[k] << endl;
                    int sum = arr[i] + arr[j] + arr[k];
                    if(sum == s){
                        isCorrect = true;
                        break;
                    }
                }
                
                if(isCorrect) break;
            }
            if(isCorrect) break;
        }

        isCorrect ? cout << "YES" : cout << "NO";
        
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        cout << endl;
    }   
    
    return 0;
}