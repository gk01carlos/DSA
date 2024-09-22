#include <iostream>
using namespace std;

// To create a linked list first we have to create the node data type.
class Node {
    public:
        int value;
        Node *next;

        Node(int value) {
            this->value = value;
            this->next = nullptr;
        } 
};

class LinkedList {
    private: 
        Node *head;
    public:
        LinkedList() {
            this->head = nullptr;
        }

        void insertFront(int value) {
            // 1. we have to create a new node.
            Node *newNode = new Node(value);

            // 2. we have to set the next of the new node to the current head
            newNode->next = head;

            // 3. we have set the head as the new node.
            head = newNode;
        }

        void show() {
            Node *temp = head;
            while (temp != NULL) {
                cout << temp->value << "-->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
            delete temp;
        }
};

int main() {
    LinkedList *linkedList = new LinkedList();
    linkedList->insertFront(1);
    linkedList->insertFront(2);
    linkedList->insertFront(3);
    linkedList->show();
    return 0;
}