#include <iostream>
#include <string>
using namespace std;

void permu(string s , string ans){

    int  n = s.size();
    if(n == 0){
        cout << ans << endl;
        return;
    }

    for(int i = 0 ;i<n;i++){
        char ch = s[i];
        permu(s.substr(0,i)+s.substr(i+1,n-i-1), ans + ch);

    }
}
int main(){

    string s = "abc";
    string ans = "";
    permu(s, ans);
    return 0;
}