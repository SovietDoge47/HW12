#include "Tree.hpp"

int main(int argc, char** argv)
{
    Tree* t = new Tree(100);
    t->addNode(t->theRoot, 10);
    t->addNode(t->theRoot, 200);
    t->addNode(t->theRoot, 30);
    t->addNode(t->theRoot, 205);
    t->addNode(t->theRoot, 137);
    t->visitInOrder(t->theRoot);
    
    return 0;
}