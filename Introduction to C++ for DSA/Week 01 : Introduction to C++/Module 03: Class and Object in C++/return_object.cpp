#include<bits/stdc++.h>
using namespace std;
class Bike{
    public: 
        string color;
        int cc;
        int speed;
    
    Bike(string color, int cc, int speed){
        (*this).color = color;
        this->cc = cc;
        this->speed = speed;
    }
};
Bike returnObj(){
    Bike rone("Rone", 180, 200);
    return rone;
}

int main(){

    Bike fourB("Blue Kamrul", 150, 80);
    // char temfourBColor[100] = "Red";
    // strcpy(fourB.color, temfourBColor);

    Bike rone = returnObj();
    
    cout << fourB.color << " " << fourB.cc << " " << fourB.speed << endl;
    cout << rone.color << " " << rone.cc << " " << rone.speed << endl;
    return 0;
}