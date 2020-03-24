#include <string>
using namespace std;
class Node
{
    private:
        string payload;
        Node* nextNode; 
    
    public:
        Node(string payload);
        string getPayload();   //return payload
        Node* getNextNode();
        void setNextNode(Node* n);
};