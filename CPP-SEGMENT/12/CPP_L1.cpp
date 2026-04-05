#include <cstddef>
#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int value) {
    data = value;
    next = NULL;
  }
};

class List {
  Node *head;
  Node *tail;

public:
  List() {
    head = NULL;
    tail = NULL;
  }

  void push_front(int value) {
    Node *newNode = new Node(value);

    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      (*newNode).next = head;
      head = newNode;
    }
  }
  void push_back(int value) {
    Node *newNode = new Node(value);

    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }
  void printList() {
    Node *temp = head;

    while (temp != NULL) {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }

  void insertNode(int val, int pos) {

    //  ex: 10->20->30->40->50->NULL
    //  we have to insert 25 at the pos 2
    //  10->20->25->30->40->50->NULL
    //  iteration is like i =0 ---> i<pos-1
    //  at very first temp -> 10
    //  after one iteration temp -> 20
    //  newNode -> next = temp -> next;
    // point to be noted that temp -> next--->30
    // temp -> next = newNode;
    // point to be noted that temp ----> 20

    Node *newNode = new Node(val);

    // Case 1: Insert at head
    if (pos == 0) {
      newNode->next = head;
      head = newNode;
      return;
    }

    Node *temp = head;
    // Move to (pos-1)
    for (int i = 0; i < pos - 1; i++) {
      if (temp == NULL) {
        cout << "Position out of range\n";
        return;
      }
      temp = temp->next;
    }

    // Safety check
    if (temp == NULL) {
      cout << "Position out of range\n";
      return;
    }

    // Insert
    newNode->next = temp->next;
    temp->next = newNode;
  }
};

int main() {
  List ll;
  ll.push_back(10);
  ll.push_back(20);
  ll.push_back(30);
  ll.push_back(40);
  ll.push_back(50);

  ll.printList();

  ll.insertNode(25, 2);
  ll.printList();

  return 0;
}