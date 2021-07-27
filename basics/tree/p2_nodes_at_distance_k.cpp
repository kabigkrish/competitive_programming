
void distk(Node *root, int k)
{
    if (root == NULL)
        return;
    if (root == 0)
        cout << root->key << " ";
    else
    {
        distk(root->left, k - 1);
        distk(root->right, k - 1);
    }
}