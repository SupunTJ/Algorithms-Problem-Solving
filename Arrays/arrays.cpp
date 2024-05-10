#include <iostream>

using namespace std;

int main(){

    int x[5];
    int y[5] = {1,2,3,4,5};
    int z[5] = {1,2};

    for(int i=0; i < sizeof(x)/sizeof(int); i++){
        cout << "x[" << i << "] = " << x[i] << " --> " << (long)&x[i] << endl;
    }

    cout << endl;

    for(int i=0; i < sizeof(x)/sizeof(int); i++){
        cout << "z[" << i << "] = " << z[i] << " --> " << (long)&z[i] << endl;
    }

    cout << endl;

    double a[5]; 

    for(int i=0; i < sizeof(a)/sizeof(double); i++){
        cout << "a[" << i << "] = " << &a[i] << " --> " << (long)&a[i] << endl;
    }

    cout << endl;

    x[6] = 23;
    cout << x[6] << " size :  " << sizeof(x)/sizeof(int) << endl;

    return 0;
}