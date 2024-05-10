#include<iostream>
using namespace std;


int main(){

    int i1 = 10;
    int i2 = i1;

    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;

    cout << endl;

    i2 = 20;
    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;
    // this is how the normal variables behave

    cout << endl;

    int& i3 = i1; // address of i1 is assigned to i3 // both are ponting the same memory location


    i3 = 100;
    cout << "i1: " << i1 << endl;
    cout << "i3: " << i3 << endl;

    return 0;
}