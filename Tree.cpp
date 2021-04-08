#include "Tree.hpp" //Node.hpp is included in Tree.hpp
#include <stdlib.h>
#include <iostream>

using namespace std;

Tree::Tree(int num)
{
    this->theRoot = new Node(num);
}

Node* Tree::addNode(Node* root, int value)
{
    if(root == NULL)
    {
        return new Node(value);
    }

    if(value <= root->getPayload())
    {
        root->child1 = addNode(root->child1, value);
    }
    else
    {
        root->child2 = addNode(root->child2, value);
    }
    return root;
}

void Tree::visitInOrder(Node* root)
{
    if(root != NULL)
    {
        visitInOrder(root->child1);
        cout << root->getPayload() << endl;
        visitInOrder(root->child2);
    }
}
