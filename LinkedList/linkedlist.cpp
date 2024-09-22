#include <iostream>
using namespace std;

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
            Node *newNode = new Node(value);

            newNode->next = head;

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