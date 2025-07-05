#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null\n";
}
Node* splitatmid(Node *head){
    Node *slow=head;
    Node *fast = head;
    Node *pre = NULL;
    while(fast != NULL && fast->next !=NULL){
        pre = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(pre != NULL){
        pre->next = NULL;
        return slow;
    }
    return slow;
}

Node* reverse(Node *head){
    Node *cur = head;
    Node *next = NULL;
    Node *pre = NULL;
    //tail = head;
    while(cur != NULL){
        next= cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;

    }
    return pre;
}

Node *zigzag(Node *head){
    Node *right =splitatmid(head);
    right = reverse(right);
    //head and right
}

int main()
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    //ll.push_back(5);
    printList(ll.head);
    //ll.head = Mergesort(ll.head);
    printList(ll.head);
}