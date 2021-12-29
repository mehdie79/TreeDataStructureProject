#include <iostream>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;
};

Node *root = NULL;

Node *createNewNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void insertIntoTree(Node **ptr, int data)
{
    if (*ptr == NULL)
    {
        *ptr = createNewNode(data);
    }
    else if ((*ptr)->data >= data)
    {
        insertIntoTree( &(*ptr)->left, data);
    }
    else
    {
        insertIntoTree(&(*ptr)->right, data);
    }
}
void printTheTree(Node *ptr)
{
    if (ptr == NULL)
        return;
    printTheTree(ptr->left);
    cout << "Data: " << ptr->data << endl;
    printTheTree(ptr->right);
    // if(ptr->left != NULL)
    // {
    //     cout <<  "/"
    //             "/"
    //            "/" << endl;
    // }
    // if (ptr->right != NULL)
    // {
    //     cout << "\\"
    //              "\\"
    //              " \\" << endl;
    // }
}

int main()
{
    insertIntoTree(&root, 20);
    insertIntoTree(&root, 30);
    insertIntoTree(&root, 40);
    insertIntoTree(&root, 50);
    printTheTree(root);
    return 0;
}