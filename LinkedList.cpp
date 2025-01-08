#include <iostream>

// A node struct that stores data and a pointer another node
struct Node {
    int data;
    Node* next;

    Node(int item) {
        data = item;
    }
};

int main()
{
    // Node initializations
    Node* start = nullptr;
    Node* first = new Node(14);
    Node* second = new Node(24);
    Node* third = new Node(36);
    Node* fourth = new Node(44);
    Node* fifth = new Node(89);

    // Pointer to the next node
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    //Set start node equal to first node
    start = first;

    // Display the nodes as long as start does not point to a null node
    while (start != NULL) {
        std::cout << start->data << "-->";
        start = start->next;
    }
}
