//linkedList.cpp
// Created by GP on 2/20/2026.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

};

void insertEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    if(*head == nullptr) {
        *head = newNode;
    } else {
        Node* last = *head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }

} void displayList(Node* node) {
    while (node != nullptr) {
        cout<< node->data<<" ";
        node = node->next;
    }
    cout<<endl;
}
void deleteNode(Node** head, int value) {
    if (*head == nullptr) return;

    if ((*head)->data == value) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }


    Node* current = *head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }


    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
}

 int main() {
    Node* head = nullptr;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    displayList(head);
    deleteNode(&head,1);
    displayList(head);

    return 0;
}