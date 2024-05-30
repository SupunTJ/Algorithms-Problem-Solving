#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

map<int, long> cache;

// int fib(int n){
//     if(n == 0) return 0;
//     else if(n == 1) return 1;

//     return fib(n-1) + fib(n-2);
// }

long fib(int n){
    if (cache.find(n) == cache.end())
    {
        if(n == 0) return 0;
        else if(n == 1) return 1;

        long f1 = fib(n-1);
        long f2 = fib(n-2);

        cache[n-1] = f1;
        cache[n-2] = f2;

        return f1 + f2;
    }else
    {
        return cache[n];
    }
    
    
}

int main(){

    int n = 50;


    for (int i = 0; i <= n; i++)
    {
        long ans = fib(i);
        cout << "fib(" << i << ") = " << ans << endl;
    }
       


    return 0;
}