#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;

  Node(int val) {
    data = val;
    next = NULL;
    prev = NULL;
  }
};

class DoublyLinkedList {
private:
  Node *head;
  Node *tail;

public:
  DoublyLinkedList() {
    head = NULL;
    tail = NULL;
  }

  // insert at beginning
  void push_front(int val) {
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL) {
      head = newNode;
      tail = newNode;
      return;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }

  void push_back(int val) {
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL) {
      head = newNode;
      tail = newNode;
      return;
    }
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    tail = newNode;
  }
};
int main() {
  // doubly linked list
  return 0;
}