#include<iostream>
using namespace std;


int main(){

    int* i1 = new int(10);
    int* i2 = i1;

    cout << "i1: " << &i1 << " = " << i1 << " = " << *i1 << endl;
    cout << "i2: " << &i2 << " = " << i2 << " = " << *i2 << endl;

    cout << endl;

    // result 
            //stack    heap    
    // i1: 0x61fefc = 0x1f1f40 = 10
    // i2: 0x61fef8 = 0x1f1f40 = 10

    *i2 = 20;
    cout << "i1: " << &i1 << " = " << i1 << " = " << *i1 << endl;
    cout << "i2: " << &i2 << " = " << i2 << " = " << *i2 << endl;

    cout << endl;

    // result
    // i1: 0x61fefc = 0x951f40 = 10
    // i2: 0x61fef8 = 0x951f40 = 10

    // i1: 0x61fefc = 0x951f40 = 20
    // i2: 0x61fef8 = 0x951f40 = 20

    int*& i3 = i1;
    *i3 = 100;
    cout << "i1: " << &i1 << " = " << i1 << " = " << *i1 << endl;
    cout << "i2: " << &i2 << " = " << i2 << " = " << *i2 << endl;
    cout << "i3: " << &i3 << " = " << i3 << " = " << *i3 << endl;

    //result 
//  i1: 0x61fef8 = 0x8d1f40 = 10
//  i2: 0x61fef4 = 0x8d1f40 = 10

//  i1: 0x61fef8 = 0x8d1f40 = 20
//  i2: 0x61fef4 = 0x8d1f40 = 20

//  i1: 0x61fef8 = 0x8d1f40 = 100
//  i2: 0x61fef4 = 0x8d1f40 = 100
//  i3: 0x61fef8 = 0x8d1f40 = 100

    cout << endl;

    return 0;
}