#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    // Constructor to initialize value and set next/prev to nullptr
    Node(int value) {
        val = value;
        next = nullptr;
        prev = nullptr;
    }
};


class DoublyList {
public:
    Node* head = nullptr;
    Node* tail = nullptr;

    // Constructor to initialize head and tail to nullptr
    DoublyList() {
        head = nullptr;
        tail = nullptr;
    }


    void push_front(int value){
        Node *dNode = new Node(value);
        if(head == nullptr){
            head = tail = dNode;
            return;
        }
        
        dNode->next = head;
        head->prev = dNode;
        head = dNode;
        

    }
    void pop_front(){
        Node *temp = head;
        if(head == tail){
            delete head;
            head = tail = nullptr;
            
            return;

        }
        head = head->next;
        head->prev = nullptr;
        delete temp;
    }
};


void printDoubly(Node *head){
    //cout<<"null <-> ";
    while(head !=nullptr){
        cout<<head->val<<" <-> ";
        head = head->next;

    }
    cout<<"null\n";
}

int main(){
    DoublyList dbll;
    dbll.push_front(3);
    dbll.push_front(4);
    dbll.push_front(5);
    dbll.pop_front();



    printDoubly(dbll.head);

}