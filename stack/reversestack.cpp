#include <iostream>
#include <stack>
using namespace std;

void push_bottom(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    push_bottom(s, val);
    s.push(temp);
}

void reverse_stack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse_stack(s);
    push_bottom(s,temp);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    reverse_stack(s);

   

    
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}