#ifndef TREE_HPP
#define TREE_HPP
#include <iostream>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
};

class Tree
{
    private:
        Node *root;
        void insertIntoTree(Node **ptr, int data);
        void printTheTree(Node *ptr);


    public:
        Tree();
        void insert(int data);
        Node *createNewNode(int data);
        void print();
};
#endif
