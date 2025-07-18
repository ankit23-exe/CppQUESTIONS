#include<iostream>
#include<vector>
using namespace std;

template<class T>
class stack{
    vector<T> vstack;

public:
    void print(){
        for(T i : vstack){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    void push(T value){
        vstack.push_back(value);
    }
    T pop(){
        /* if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return -1;

        } */
        T v =vstack[vstack.size()-1];
        vstack.pop_back();
        return v;
    }
    bool isEmpty(){
        return (vstack.size()==0);
    }



};

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    //s.print();
    while(!s.isEmpty()){

        cout << s.pop() << " ";
    }
   

   
    //s.print();



}