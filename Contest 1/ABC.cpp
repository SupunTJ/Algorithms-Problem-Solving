#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int a, b, c;
    int A, B, C;
    vector<int> num;

    cin >> a >> b >> c;
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);

    sort(num.begin(), num.end());

    string order;
    cin >> order;

    for (int i = 0; i < num.size(); i++)
    {
        if (order[i] == 'C')
        {
            C = num[2];
            cout << C << " ";
        }
        else if (order[i] == 'B')
        {
            B = num[1];
            cout << B << " ";
        }
        else
        {
            A = num[0];
            cout << A << " ";
        }
    }

    return 0;
}