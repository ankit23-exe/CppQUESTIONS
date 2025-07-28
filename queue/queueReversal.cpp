#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    stack<int> s;
    int i=1;
    while(i<6){
        q.push(i);

        i++;
    }
    //poping queue and pushing in stack
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}