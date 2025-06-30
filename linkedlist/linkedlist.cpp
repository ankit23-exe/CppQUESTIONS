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
    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;

        }
    }

};

class List{
    Node *head = NULL;
    Node *tail = NULL;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }

    }

    void push_front(int val){
        Node *newNode = new Node(val);

        if(head == NULL){
            head=newNode;
            tail= newNode;

        }else{
        newNode->next = head;
        head = newNode;
        }
    }
    void printList(){
        Node *temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;

        }
        cout<<"null"<<endl;
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
    void pop_front(){
        if(head == NULL){
            cout<<"ll is empty"<<endl;
            return ;
        }
        Node *temp = head;
        head= head->next;
        temp->next = NULL;
        delete temp;

    }
    void pop_back(){
        if (head == NULL)
        {
            cout << "ll is empty" << endl;
            return;
        }
        if(head == tail ){
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;
        
        while(temp->next->next != NULL){  // temp->next != tail
            temp = temp->next;
        }
        delete tail;
        temp->next = NULL;
        tail = temp;


    }
    int searchltr(int key){
        int idx = 0;
        Node *temp = head;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            idx++;
            temp = temp->next;

        }
        
        return -1;
        
    }
    int helper(Node *h,int key){

        if(h->next == NULL){
            return -1;
        }

        if(h->data == key){
            return 0;
        }
        int idx =helper(h->next,key);

        if(idx == -1){
            return -1;
        }
        return 1+idx;

    }

    int searchRec(int key){
        return helper(head, key);

    }

    void reverse(){
        Node *cur = head;
        Node *pre = NULL;
        Node *nxt = NULL;

        tail = head;
        while(cur != NULL){
            nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        head = pre;
    }

    //find and remove nth node from end , and last sa counting 1 sa start hoga 
    void removeNth(int position){
        int n =0;
        Node *temp =head;
        while(temp != NULL){
            n++;
            temp = temp->next;

        }
        cout<<"size is"<<n<<endl;
        temp = head;

        if(n==position){
            Node *t = head;
            head = head->next;
            t->next = NULL;
            delete t;
           
            return;
        }

        for(int i =1 ; i<n-position;i++){
            temp = temp->next;
            
        }
        temp->next = temp->next->next;
    }

};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    //ll.printList();
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();
   // ll.pop_front();
   //ll.pop_back();
   //cout<<ll.searchRec(1)<<endl;
   //ll.reverse();
   ll.removeNth(5);
    ll.printList();
}