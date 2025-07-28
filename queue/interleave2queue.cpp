#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q1; 
    for(int i=1;i<11;i++){
        q1.push(i);
    }
    //making a second queue containing half of original queue
    int half = q1.size() / 2;
    queue<int> q2;
    for(int i =1;i<=half;i++){
        q2.push(q1.front());
        q1.pop();
    }

    //now changing the original q1 and making it interleave

    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
        q1.push(q1.front());
        q1.pop();
    }

    //printing interleave q1

    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }

}