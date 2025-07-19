#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool validParanthesis(string s){
    stack<char> sta;
    for(char c : s){
        if (c == '{' || c == '[' || c == '(' ){
            sta.push(c);
        }else{
            if(sta.empty()){
                return false;
            }
            if ((c == ')' && sta.top() == '(')|| (c == '}' && sta.top() == '{') ||( c == ']' && sta.top() == '['))
            {
                
                sta.pop();
            }else{
                return false;
            }
        }
    }
    if(sta.empty()){
        return true;
    }else{
        return false;
    }
    

}
int main(){
    string s1 ="({[{}]})[]({})";
    string s2 ="})";

    cout<<"string s1 is valid "<<validParanthesis(s1)<<endl;
    cout << "string s2 is valid " << validParanthesis(s2);
}