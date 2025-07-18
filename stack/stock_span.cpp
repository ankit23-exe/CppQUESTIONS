#include <iostream>
#include <stack>
#include<vector>
using namespace std;
int span_stock(stack<int> s){
    int c = 0;
    int top = s.top();
    while(!s.empty() && s.top()<=top){
        c++;
        s.pop();
    }
    return c;

}
int main(){
    stack<int> s;
    vector<int> v={100,80,60,70,60,85,100};
    for(int i : v){
        s.push(i);  
    }
    vector<int> ans(s.size());
    for(int i =0;i<v.size();i++){
        ans[i]=span_stock(s);
        s.pop();
    }

    for (int i = 0; i <v.size(); i++)
    {
        cout<<ans[i]<<" ";
        
    }
}