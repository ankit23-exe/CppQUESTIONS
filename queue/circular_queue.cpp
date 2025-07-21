#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int n;
    int f,r;

public:
    Queue(int n){
        this->n=n;
        
        arr = new int[n];
        f=r=-1;
    }
    void enqueue(int value){
        if(f==-1 && r==-1){
            f=r=0;
            arr[f]=value;
        }else if(((r+1)%n) == f){
            cout<<"array is full";
        }
        else{
            r=(r+1)%n;
            arr[r]=value;
        }

        
    }
    int dequeue(){
        if(f==-1 && r == -1){
            cout<<"nothing to delete\n";
            return -1;
        }else if(f==r){
            int v = arr[f];
            f=r=-1;
            return v;
        }else {
            int v = arr[f];
            f =(f+1)%n;
            return v;
        }

    }
    int front(){
        if(empty()){
            cout<<"queue is empty\n";
            return -1;
        }
        return arr[f];
    }
    bool empty(){
        return (f == -1 && r == -1);
    }
      
};



int main()
{
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    while(!q.empty()){
        cout<<q.dequeue()<<" ";
    }


    
}