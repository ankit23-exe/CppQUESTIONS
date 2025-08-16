#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int v)
    {
        this->data = v;
        this->left = nullptr;
        this->right = nullptr;
    }
};

static int idx = -1;
Node *createBinaryTree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return nullptr;
    }
    Node *current = new Node(nodes[idx]);
    current->left = createBinaryTree(nodes);
    current->right = createBinaryTree(nodes);

    return current;
}
//iterative
void KthLevel1(Node* root, int k) {
    if (root == nullptr) {
        return;
    }
    
    int currentLevel = 1;
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        
        if (curr == nullptr) {
            currentLevel++;
            if (q.empty()) {
                break;
            }
            q.push(nullptr);
        } else {
            if (currentLevel == k) {
                cout << curr->data << " ";
            }
            
            if (curr->left != nullptr) {
                q.push(curr->left);
            }
            if (curr->right != nullptr) {
                q.push(curr->right);
            }
        }
    }
}
//recursive 
void KthLevel2(Node* root,int k,int curr ){
    if(root==nullptr){
        return ;
    }
    if(curr == k){
        cout<<root->data<<" ";
        return;
    }
    KthLevel2(root->left,k,curr+1);
    KthLevel2(root->right, k, curr + 1);
}


int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createBinaryTree(nodes);
//ITERATIVE
    /* cout << "Nodes at level 3: ";
    KthLevel1(root, 3);
    cout << endl;
    
    cout << "Nodes at level 1: ";
    KthLevel1(root, 1);
    cout << endl; */

    //RECURSIVE 
    KthLevel2(root,3,1);
    
    return 0;
}
