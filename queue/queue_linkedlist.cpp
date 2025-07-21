#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int val){
        this->data=val;
        this->next=nullptr;
    }

};

class Queue{
    Node *head=nullptr;
    Node *tail=nullptr;
public:
    void enqueue(int val){
        Node *temp = new Node(val);

            if (tail == nullptr)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;

        }

    }
    int dequeue(){
        if(head==nullptr){
            cout<<"there is nothing to delete"<<endl;
            return -1;
        }else if(head==tail){
            int d = head->data;
            delete head;
            head = nullptr;
            tail=nullptr;
            return d;
        }else{
            Node* temp = head;
            int d = head->data;
            head=head->next;
            delete temp;
            return d;
        }
            
        
    }
    int front(){
        if(head==nullptr){
            cout<<"nothing here\n";
            return -1;
        }else{
            return head->data;
        }
    }
    bool empty(){
        return head==nullptr;
    }

};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.front()<<endl;  
    //cout<<q.dequeue();
    while(!q.empty()){
        cout<<q.dequeue()<<" ";
    }

}