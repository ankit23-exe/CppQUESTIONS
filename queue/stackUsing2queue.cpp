#include <iostream>
#include <queue>
using namespace std;

class Stack{
    queue<int> q1;
    queue<int> q2;
public:
    void push(int v){ //o(n)
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(v);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }

    }
    int top(){//o(1)
        if(q1.empty()){
            cout<<"stack is empty";
            return -1;
        }
        return q1.front();
    }
    int pop(){//O(1)
        if (q1.empty())
        {
            cout << "stack is empty";
            return -1;
        }

        int v = q1.front();
        q1.pop();
        return v;
    }
    bool empty(){
        return q1.empty();
    }
};

int main(){
    Stack s1;
}