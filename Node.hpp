class Node
{
    public:
        int payload;
        Node* child1;
        Node* child2;
        
        Node(int payload);
        void setChildOne(Node* n);
        void setChildTwo(Node* n);
        int getPayload();
};