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
   void push_back(int val){
        Node *newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
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

Node* splitAtMid(Node *head){
    Node *slow = head;
    Node *fast = head;
    Node *pre = NULL;
    while(fast != NULL && fast->next != NULL){
        pre = slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(pre != NULL){
        pre->next =NULL;
        return slow;
    }
    return slow;    //sirf 1 node huwaaa toh 
}

Node * merge(Node *left , Node *right){
    List ans;
    while(left != NULL && right != NULL){
        if(left->data <= right->data){
            ans.push_back(left->data);
            left=left->next;
        }else{
            ans.push_back(right->data);
            right = right->next;
        }
    }
    while(left != NULL){
        ans.push_back(left->data);
        left = left->next;
    }
    while(right != NULL){
        ans.push_back(right->data);
        right = right->next;
    }

    return ans.head;

}


Node* Mergesort(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *right = splitAtMid(head);

    Node *left = Mergesort(head);
    right = Mergesort(right);

    return merge(left,right);
}

int main(){
    List ll ;
    ll.push_back(6);
    ll.push_back(4);
    ll.push_back(2);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(5);
    printList(ll.head);
    ll.head = Mergesort(ll.head);
    printList(ll.head);

}