#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool dupliParanthesis(string s){

    stack<char> sta;
    for (char c : s)
    {
        if ( c != ')'){
            sta.push(c);

        }else{
            if( c == ')' && sta.top()=='('){
                return true;
            }
            while(sta.top()!='('){
                sta.pop();
            }
            sta.pop();

        }
    
    }
    return false;


}
        


int main()
{
    string s1 = "((a+b))";
    string s2 = "((a+b)+(x+z))";

    cout << "string s1 is valid " << dupliParanthesis(s1) << endl;
    cout << "string s2 is valid " << dupliParanthesis(s2);
}