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

int height(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht, rightht) + 1;
}

int Diam1(Node* root){
    if(root == nullptr){
        return 0;
    }

    int currdia = height(root->left)+height(root->right)+1;
    int leftdia = Diam1(root->left);
    int rightdia = Diam1(root->right);

    return max(currdia,max(leftdia,rightdia));
}

pair<int,int> Diam2(Node *root){
    //(diameter,height)
    if(root==nullptr){
        return {0,0};
    }

    pair<int,int> leftinfo =Diam2(root->left);
    pair<int, int> rightinfo = Diam2(root->right);

    int currdiam = max((leftinfo.second+rightinfo.second +1),max(leftinfo.first,rightinfo.first));

    int currheight=max(leftinfo.second,rightinfo.second)+1;

    return {currdiam,currheight};
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createBinaryTree(nodes);

    //cout<<Diam1(root);
    cout<<Diam2(root).first<<endl;
    cout << Diam2(root).second << endl;
}
