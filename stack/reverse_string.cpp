#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s;
    stack<char> stac;
    cin>>s;
    for(char letter : s){
        stac.push(letter);
    }
    string ans="";
    while(!s.empty()){
        cout<<stac.top();
        stac.pop();


    }



}