#include <iostream>
#include <vector>
#include<queue>
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

void PreorderTraversal(Node* root){
    if(root == nullptr){
        //cout<<"-1 ";
        return;
    }
    cout<<root->data<<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}
void InorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        //cout << "-1 ";
        return;
    }
    InorderTraversal(root->left);
    cout << root->data << " ";
    InorderTraversal(root->right);
}

void PostorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        //cout << "-1 ";
        return;
    }
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout << root->data << " ";
}


void levelOrder(Node *root){
    if(root==nullptr){
        cout<<"emtpy tree\n";
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if(curr ==nullptr){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(nullptr);
        }else{
        cout<<curr->data<<" ";
        if(curr->left!=nullptr){
            q.push(curr->left);
        }
        if (curr->right != nullptr)
        {
            q.push(curr->right);
        }
    }
        
    }

}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createBinaryTree(nodes);
    
   /*  cout<<"preorder \n";
    PreorderTraversal(root);
    cout << "ineorder \n";

    InorderTraversal(root);

    cout << "postorder \n";

    PostorderTraversal(root); */
    cout<<"lever order\n";
    levelOrder(root);
}
