#include <cstdio>
#include <iostream>

using namespace std;


// int factorial(int n){
//     int i = n;
//     int answer = n;
//     while (i > 1)
//     {
//         answer = answer * (i-1);
//         i--;
//     }
//     return answer;
    
// }

int factorial(int n){
   cout << "n: " << n << endl;
   if(n <= 1){
    return 1;
   }

    return n * factorial(n-1);

}

int main(){

    int x = factorial(3);
    cout << "answer : " << x << endl;

    return 0;
}