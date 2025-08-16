#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

void topView(Node* root) {
    if (root == nullptr) {
        return;
    }
    
    queue<pair<Node*, int>> q;
    map<int, int> m;
    
    q.push({root, 0});
    
    while (!q.empty()) {
        Node* curr = q.front().first;
        int hd = q.front().second;
        q.pop();
        
        if (m.count(hd) == 0) {
            m[hd] = curr->data;
        }
        
        if (curr->left != nullptr) {
            q.push({curr->left, hd - 1});
        }
        
        if (curr->right != nullptr) {
            q.push({curr->right, hd + 1});
        }
    }
    
    for (auto it : m) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createBinaryTree(nodes);

    cout << "Top view of the tree: ";
    topView(root);
    
    return 0;
}
