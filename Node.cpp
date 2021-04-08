#include "Node.hpp"
#include <stdlib.h>

using namespace std;

Node::Node(int payload)
{
    this->payload = payload;
    this->child1 = NULL;
    this->child2 = NULL;
}

void Node::setChildOne(Node* child1)
{
    this->child1 = child1;
}

void Node::setChildTwo(Node* child2)
{
    this->child2 = child2;
}

int Node::getPayload()
{
    return this->payload;
}