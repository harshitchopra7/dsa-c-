#include <iostream>

using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// inorder -> Left Node Right
void inorder(struct TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// preorder -> Node Left Right
void preorder(struct TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// postorder -> Left Right Node
void postorder(struct TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    cout << "Inorder => ";
    inorder(root);
    cout << "\n";

    cout << "Preorder => ";
    preorder(root);
    cout << "\n";

    cout << "Postorder => ";
    postorder(root);
    cout << "\n";

    return 0;
}