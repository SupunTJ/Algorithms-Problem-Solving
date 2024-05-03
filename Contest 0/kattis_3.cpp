#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 0;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), greater<int>());
    
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0){ a += v[i];}
        else{b += v[i];}
    }

    cout << a << " " << b;

    return 0;
}