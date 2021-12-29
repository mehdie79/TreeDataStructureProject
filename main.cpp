#include <iostream>
#include "tree.hpp"
using namespace std;

int main()
{
    Tree tree;
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(50);
    tree.insert(60);
    tree.insert(80);
    tree.print();

    return 0;
}