#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >> z;

    int maxNum = max({x, y, z});
    int minNum = min({x, y, z});

    cout << minNum << " " << maxNum;
    
    return 0;
}