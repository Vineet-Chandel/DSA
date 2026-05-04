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
public:
  Node *head;
  Node *tail;

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
  void printList() {
    Node *temp = head;

    while (temp != NULL) {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }

  Node *tailNode(Node *temp) {
    while (temp->next != NULL) {
      temp = temp->next;
    }
    return temp;
  }

  Node *findMid(Node *head) {
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
    }
    return slow;
  }

  Node *reverseList(Node *head) {
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
    return head;
  }

  void zigzag() {

    Node *t1 = head;
    Node *t2 = reverseList(findMid(head)->next);
    while (t2 != NULL) {
      Node *temp1 = t1->next;
      Node *temp2 = t2->next;
      t1->next = t2;
      t2->next = temp1;

      if (temp1 == NULL) {
        t2->next = NULL;
        break;
      }
      t1 = temp1;
      t2 = temp2;
    }
  }
};

int main() {
  List ll;

  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  ll.printList();

  return 0;
}