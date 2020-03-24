#include "Node.hpp"
#include <string>
using namespace std;

class Stack 
{
    private:
        Node* top;


    public:
        Stack();
        void push(string payload); //add node to top
        string peek(); //return top's value
        string pop();  //return value of top and remove it

        string selectDisc();
        void moveDisk(string disc);

        void display();
};