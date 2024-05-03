#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// void PrintStack(stack<int> s)
// {
//     // If stack is empty
//     if (s.empty())
//         return;

// // Extract top of the stack
//     int x = s.top();

//     // Pop the top element
//     s.pop();

//     // Print the current top
//     // of the stack i.e., x
//     cout << x << ' ';

//     // Proceed to print
// // remaining stack
//     PrintStack(s);

//     // Push the element back
//     s.push(x);
// }

int main()
{

    int n;
    stack<int> s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (s.empty())
        {
            s.push(x);
        }
        else
        {
            if ((s.top() + x) % 2 == 0)
            {
                s.pop();
            }
            else
            {
                s.push(x);
            }
        }
    }

    // }
    // PrintStack(s);
    cout << s.size() << endl;

    return 0;
}