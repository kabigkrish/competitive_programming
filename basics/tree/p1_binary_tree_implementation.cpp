#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right;
    Node *left;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
/*
traversal 

1.depth first 
a)inorder =>  left ,root,right
b)preorder => root ,left ,right
c)postorder =>left ,right ,root
*/
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}
//height of binary tree :)

int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;
}
int main()
{
    Node *root = new Node(12);
    root->left = new Node(123);
    root->right = new Node(12324);
    //inorder(root);
    cout << height(root);
}