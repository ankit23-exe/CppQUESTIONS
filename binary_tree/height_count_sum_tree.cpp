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

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht, rightht) + 1;
}

int sumOfNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int lsum = sumOfNodes(root->left);
    int rsum = sumOfNodes(root->right);
    return lsum + rsum + root->data;
}

int countNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    return leftCount + rightCount + 1;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = createBinaryTree(nodes);
    
    cout << "Height of tree: " << height(root) << endl;
    cout << "Sum of all nodes: " << sumOfNodes(root) << endl;
    cout << "Count of nodes: " << countNodes(root) << endl;
    
    return 0;
}
