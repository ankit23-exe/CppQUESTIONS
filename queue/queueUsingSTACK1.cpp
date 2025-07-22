#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int v){     //o(n)
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(v);
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        
    }
    int pop(){ //o(1)
        if(s1.empty()){
            cout<<"empty queue\n";
            return -1;
        }
        int v = s1.top();
        s1.pop();
        return v;
    }
    
    int front(){//o(1)
        if (s1.empty())
        {
            cout << "empty queue\n";
            return -1;
        }
        return s1.top();
    }
    bool empty(){
        return s1.empty();
    }
};

int main(){
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    cout<<q.front();



}
//other approach , when we make push O(1) , and pop/front O(n)