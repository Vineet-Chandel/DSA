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
public:
  Node *head;
  Node *tail;

  List() {
    head = NULL;
    tail = NULL;
  }

  // ~List() {
  //   cout << "~List " << endl;
  //   if (head != NULL) {
  //     delete head;
  //     head = NULL;
  //   }
  // }
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
  void removeFromEnd(int node) {
    int size = 0;
    Node *temp = head;

    while (temp != NULL) {
      temp = temp->next;
      size++;
    }

    // Invalid case
    if (node > size)
      return;

    // 🔥 Handle head deletion
    if (node == size) {
      Node *del = head;
      head = head->next;
      delete del;
      return;
    }
    temp = head;
    int i = 1;
    while (i != (size - node)) {
      temp = temp->next;
      i++;
    }

    Node *del = temp->next;
    temp->next = del->next;
    delete del;
  }
  bool isCycle(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        return true;
      }
    }
    return false;
  }
  void removeCycle(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast) {
        slow = head;
        while (slow != fast) {
          slow = slow->next;
          fast = fast->next;
        }

        Node *temp = fast;
        while (temp->next != slow) {
          temp = temp->next;
        }
        temp->next = NULL;
        return;
      }
    }
  }
};

class Example {
public:
  int data = 10;
};

int main() {
  List ll;
  // ll.push_back(10);
  // ll.push_back(20);
  // ll.push_back(30);
  // ll.push_back(40);
  // ll.push_back(50);

  // ll.printList();

  // ll.insertNode(25, 2);
  // ll.printList();

  // ll.search(30);
  // Example E1;
  // E1.data++;
  // E1.data++;
  // E1.data++;
  // E1.data++;
  // cout << E1.data << endl;

  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);

  ll.tail->next = ll.head;

  if (ll.isCycle(ll.head)) {
    cout << "Cycle detected" << endl;
  } else {
    cout << "Cycle not detected" << endl;
  }
  ll.removeCycle(ll.head);
  if (ll.isCycle(ll.head)) {
    cout << "Cycle detected" << endl;
  } else {
    cout << "Cycle not detected" << endl;
  }
  return 0;
}