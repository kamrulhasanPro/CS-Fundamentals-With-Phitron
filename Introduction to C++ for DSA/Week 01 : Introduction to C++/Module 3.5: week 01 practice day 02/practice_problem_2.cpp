#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
	 int jersey_no;
	 string country;
};

int main(){
    Cricketer* dhoni = new Cricketer();    
    dhoni->jersey_no = 10;
    dhoni->country = "India";

    Cricketer* kholi = new Cricketer();    
    // kholi = dhoni;
    kholi->jersey_no = dhoni->jersey_no;
    kholi->country = dhoni->country;

    delete dhoni;

    // cout << (*dhoni).jersey_no << " " << (*dhoni).country << endl;
    cout << (*kholi).jersey_no << " " << (*kholi).country << endl;
    return 0;
}