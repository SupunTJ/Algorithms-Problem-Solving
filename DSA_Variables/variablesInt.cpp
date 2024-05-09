#include <iostream>

using namespace std;

int main(){

    int x;
    int y;
    int z = 20;

    int* px = &x;
    int* py = &y;
    int* pz = &z;

    cout << "x: " << &x << endl;
    cout << "y: " << &y << endl;
    cout << "z: " << &z << endl;

    cout << "&x - &y =  " << (px - py) * sizeof(int*) << endl;
    cout << "&y - &z =  " << (py - pz) * sizeof(int*) << endl;

    return 0;
}