#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    
    string s;
    cin >> s;
    int N = s.length();
    vector <char> ans;
    int temp = 0;
    // cout << N;
    
    for(int j = 0; j < N ; j++){
        ans.push_back(s[j]);
    }
    int i;
    for(i = 0; i < N; i++){
        if(ans[i] == 'a'){
            break;
        }
    }
    
    for(int j = i; j < N ; j++){
        cout << ans[j];
    }
    
    
    return 0;
}