#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;

    // if(x > y){
    //     cout << x;
    // }else{
    //     cout << y;
    // }
    
    cout << max(x, y) << endl;
    cout << min(x, y) << endl;

    // int tem = x;
    // x = y;
    // y = tem;
    swap(x, y);
    cout << x << " " << y << endl;

    cout << max({10, 30 , 20 , 40, 60, 70});

    return 0;
}