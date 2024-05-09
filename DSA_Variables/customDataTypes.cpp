#include <iostream>

using namespace std;

struct myStruct
    {
        int x;
        bool y;
        double z;
    };

int main(){

    myStruct x;
    myStruct y = {1, false, 1.23};
    myStruct z;

    cout << "x: " << &x << endl;
    cout << "y: " << &y << endl;
    cout << "z: " << &z << endl;

    cout << "Size: " << sizeof(myStruct) << endl;
    cout << "&x - &y =  " << (&x - &y) * sizeof(myStruct) << endl;
    cout << "&y - &z =  " << (&y - &z) * sizeof(myStruct) << endl;
   
    return 0;
}