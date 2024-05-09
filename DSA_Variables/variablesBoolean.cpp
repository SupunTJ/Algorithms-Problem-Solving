#include <iostream>

using namespace std;

int main(){

    bool x;
    bool y = true;
    bool z = false;

    bool* px = &x;
    bool* py = &y;
    bool* pz = &z;

    cout << "x: " << &x << endl;
    cout << "y: " << &y << endl;
    cout << "z: " << &z << endl;

    cout << "Size :  " << sizeof(px) << endl;


    return 0;
}