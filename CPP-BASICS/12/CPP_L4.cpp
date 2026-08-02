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

  Node *findMid(Node *head) {
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
    }
    return slow;
  }

  Node *merge(Node *head1, Node *head2) {
    if (!head1)
      return head2;
    if (!head2)
      return head1;

    Node *result = NULL;

    if (head1->data <= head2->data) {
      result = head1;
      result->next = merge(head1->next, head2);
    } else {
      result = head2;
      result->next = merge(head1, head2->next);
    }
    return result;
  }

  Node *mergeSort(Node *head) {
    // base case
    if (head == NULL || head->next == NULL)
      return head;

    // find mid
    Node *mid = findMid(head);
    Node *right = mid->next;
    mid->next = NULL;

    // recursive sort
    Node *left = mergeSort(head);
    Node *rightSorted = mergeSort(right);

    // merge and RETURN
    return merge(left, rightSorted);
  }
};

int main() {
  List ll;
  ll.push_front(8);
  ll.push_front(2);
  ll.push_front(5);
  ll.push_front(1);
  ll.push_front(6);
  ll.push_front(3);

  Node *temp = ll.head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;

  return 0;
  ;
}