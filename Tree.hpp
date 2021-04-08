#include "Node.hpp"

using namespace std;

class Tree
{
    public:
        Node* theRoot;
        Tree(int num);
        Node* addNode(Node* n, int value);
        void visitInOrder(Node* n);
};