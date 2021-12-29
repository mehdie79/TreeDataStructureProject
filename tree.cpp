#include "tree.hpp"

Tree::Tree()
{
    root = NULL;
}
void Tree::insert(int data)
{
    insertIntoTree(&root, data);
}
Node *Tree::createNewNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}
void Tree::insertIntoTree(Node **ptr, int data)
{
    if (*ptr == NULL)
    {
        *ptr = createNewNode(data);
    }
    else if ((*ptr)->data >= data)
    {
        insertIntoTree(&(*ptr)->left, data);
    }
    else
    {
        insertIntoTree(&(*ptr)->right, data);
    }
}
void Tree::print()
{
    printTheTree(root);
}
void Tree::printTheTree(Node *ptr)
{
    if (ptr == NULL)
        return;
    printTheTree(ptr->left);
    cout << "Data: " << ptr->data << endl;
    printTheTree(ptr->right);
}