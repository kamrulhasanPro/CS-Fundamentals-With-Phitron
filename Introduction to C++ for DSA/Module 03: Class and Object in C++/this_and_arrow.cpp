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
int main(){

    Bike fourB("Blue Kamrul", 150, 80);
    // char temfourBColor[100] = "Red";
    // strcpy(fourB.color, temfourBColor);
    
    cout << fourB.color << " " << fourB.cc << " " << fourB.speed;
    return 0;
}