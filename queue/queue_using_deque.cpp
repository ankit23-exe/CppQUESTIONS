#include <iostream>
#include <deque>
using namespace std;

class Queue {
    deque<int> d;
    
public:
    void push(int x) {
        d.push_back(x);
    }
    
    void pop() {
        if (!d.empty()) {
            d.pop_front();
        }
    }
    
    int front() {
        if (!d.empty()) {
            return d.front();
        }
        return -1; // or throw an exception for empty queue
    }
    
    bool empty() {
        return d.empty();
    }
    
    int size() {
        return d.size();
    }
};

int main() {
    Queue q;
    
    // Test the queue implementation
    q.push(10);
    q.push(20);
    q.push(30);
    
   
}
