#include <iostream>
#include <string>
using namespace std;

void subset(string s , string ans){
    if( s.size() == 0){
        cout<< ans << endl;
    
        return;
    }
    //yes choice 
    subset(s.substr(1,s.size()-1), ans + s[0]);     
    //no choice
    subset(s.substr(1,s.size()-1), ans);
}

int main(){
    string s = "abc";
    string ans ="";
    subset(s, ans);     
}   