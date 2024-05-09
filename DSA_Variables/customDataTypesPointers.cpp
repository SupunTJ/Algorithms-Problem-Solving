#include <iostream>

using namespace std;

struct myStruct
    {
        int x = 5;
        bool y;
        double z;
    };

int main(){

    myStruct* x = nullptr;
    myStruct* y = new myStruct(); // this object creates in the heap 
    myStruct* z;
    // y is a address of myStruct type memory location

    myStruct a = *y; // assinging the object in the location of y(address), to a 

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    cout << "Size: " << sizeof(myStruct*) << endl;
    cout << "x - y =  " << (x - y) << endl;
    cout << "y - z =  " << (y - z) << endl;

    cout << "value : " << &y << endl;
    cout << "value : " << y->x << endl;
    cout << "value : " << a.x << endl;
 
   
    return 0;
}