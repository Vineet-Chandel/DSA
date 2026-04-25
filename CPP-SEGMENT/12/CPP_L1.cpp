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

  ~Node() {
    cout << "~Node " << data << endl;

    if (next != NULL) {
      delete next;
      next = NULL;
    }
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

  ~List() {
    cout << "~List " << endl;
    if (head != NULL) {
      delete head;
      head = NULL;
    }
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
  void pop_front() {
    Node *temp = head;

    if (head == NULL) {
      cout << "List is empty\n";
      return;
    }
    head = head->next;
    temp->next = NULL;
    delete temp;
  }
  void search(int val) {
    Node *temp = head;
    bool is_found = false;
    while (temp != NULL) {
      if (temp->data == val) {
        is_found = true;
        break;
      }
      temp = temp->next;
    }
    if (is_found) {
      cout << val << " is present in the list" << endl;
    } else {
      cout << val << " is not present in the list" << endl;
    }
  }
  int searchRecur(Node *temp, int val) {

    // Base case (very important)
    if (temp == NULL) {
      return -1;
    }

    // Found
    if (temp->data == val) {
      return 0;
    }

    // Recursive call
    int idx = searchRecur(temp->next, val);

    if (idx == -1) {
      return -1;
    }

    return idx + 1;
  }
};

class Example {
public:
  int data = 10;
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

  ll.search(30);
  Example E1;
  E1.data++;
  E1.data++;
  E1.data++;
  E1.data++;
  cout << E1.data << endl;
  return 0;
}