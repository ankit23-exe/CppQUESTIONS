#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void stock_span(vector<int> &stock,vector<int> &span){
    stack<int> s;
    span[0]=1;
    s.push(0);
    for(int i =1 ;i<stock.size();i++){
        int currentstock = stock[i];
        while(!s.empty() && currentstock>= stock[s.top()] ){
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;
            s.push(i);
        }else{
            span[i]=i-s.top();
            s.push(i);
            
        }
    }

}



int main(){
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100};

    vector<int> ans(7,0);
    stock_span(stock,ans);
    
    for(int i:ans){
        cout<<i<<" ";
    }
}