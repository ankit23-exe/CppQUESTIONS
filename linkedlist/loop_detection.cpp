#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
public:
    Node *head =NULL;
    Node *tail = NULL;

    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            //return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout<<"ll is empty \n";
            return;
        }
        Node *temp = head;

        if(head == tail){
            head = tail = NULL;

        }else{
        head = head->next;
        temp->next = NULL;
        delete temp;
        }

    }

};

void printList(Node *head){
    Node *temp = head;
    while(temp !=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"null\n";
}

bool isCycle(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            cout<<"cycle found\n";
            return true;
        }
    }
    cout<<"no cycle\n";
    return false;
}

void removeCycle(Node *head){
    Node *slow = head;
    Node *fast = head;
    bool flag = 0;
    while( fast!= NULL && fast->next != NULL ){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<"cycle present\n";
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"no cycle present \n";
        return;
    }

    slow = head;

    if(slow == fast){
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL;


    }else{
        
        Node *prev = fast;
        while(slow != fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
    }

}



int main(){
    List ll ;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    //ll.pop_front();
    ll.tail->next = ll.head->next;

   
   
    //printList(ll.head);
    removeCycle(ll.head);
    printList(ll.head);
}