#include<iostream>
using namespace std;
int main(){
    float pi=3.14;
    int radius;
    cout<< "enter radius" <<"\n";
        cin>> radius;
    float circumference= 2 * pi * radius;
    
    cout<< "circumference is = " << circumference ;
    return 0;
}