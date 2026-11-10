// betalinklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    // Contructor
    Node(int val) {
        value = val;
        next = NULL;
    }
};

void traverse(Node* begin) {
    Node* temp = begin;
    while (!temp == NULL) {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main()
{
    Node* head;
    
    Node* student1 = new Node(45);
    head = student1;
    Node* student2 = new Node(76);
    Node* student3 = new Node(90);
    Node* student5 = new Node(84);
    Node* student4 = new Node(88);

    student1->next = student2;
    student2->next = student3;
    student3->next = student4;
    student4->next = student5;

    traverse(head);


    return 0;
}

 