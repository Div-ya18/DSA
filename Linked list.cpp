#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insertAtBeginning(int value) {
        Node* newNode = new Node{value, head};
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void insertInMiddle(int value, int position) {
        if (position <= 0) {
            cout << "Invalid position. Position should be greater than 0." << endl;
            return;
        }

        Node* newNode = new Node{value, nullptr};

        if (position == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        for (int i = 1; i < position - 1; i++) {
            if (current == nullptr) {
                cout << "Invalid position. Position exceeds the length of the list." << endl;
                delete newNode;
                return;
            }
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd() {
        if (!head) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }

        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        while (current->next->next) {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }

    void deleteFromMiddle(int position) {
        if (position <= 0) {
            cout << "Invalid position. Position should be greater than 0." << endl;
            return;
        }

        if (!head) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }

        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        for (int i = 1; i < position - 1; i++) {
            if (current == nullptr || current->next == nullptr) {
                cout << "Invalid position. Position exceeds the length of the list." << endl;
                return;
            }
            current = current->next;
        }

        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    void printList() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);
    list.insertAtEnd(4);
    list.insertInMiddle(6, 2);

    list.printList();

    list.deleteFromBeginning();
    list.deleteFromEnd();
    list.deleteFromMiddle(2);

    list.printList();

    return 0;
}

