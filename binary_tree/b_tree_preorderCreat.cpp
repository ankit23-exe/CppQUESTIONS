#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int v){
        this->data = v;
        this->left=nullptr;
        this->right=nullptr;
    }
};

static int idx =-1;
Node* createBinaryTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return nullptr;
    }
    Node* current = new Node(nodes[idx]);
    current->left = createBinaryTree(nodes);
    current->right = createBinaryTree(nodes);

    return current;
}


int main(){
    vector<int> nodes ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root = createBinaryTree(nodes);
    cout<<"root "<<root->data<<endl;
    cout<<"root left value "<<root->left->data;

}
