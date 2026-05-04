#include <iostream>
using namespace std;

class Node {
public:
  int exponent;
  float coefficient;
  Node *next;

  Node(int expo, float coeff) {
    exponent = expo;
    coefficient = coeff;
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

  void createPoly() {
    cout << "Enter the POLYNOMIAL!" << endl;

    int expo;
    cout << "Enter the max exponent power of which the polynomial is of_";
    cin >> expo;
    cout << endl;
    Node *newNode;

    for (int i = expo; i >= 0; i--) {
      int coeff;
      cout << "Enter the cefficient of the exponent " << " " << i << "->";
      cin >> coeff;
      newNode = new Node(i, coeff);
      if (head == NULL) {
        head = tail = newNode;
        continue;
      } else {
        tail->next = newNode;
        tail = newNode;
      }

      cout << "We added" << " " << coeff << " " << "with exponent of" << " "
           << i << endl;
    }
  }
  void printPoly() {
    Node *temp = head;
    while (temp != NULL) {
      cout << temp->coefficient << "x^" << temp->exponent << " + ";
      temp = temp->next;
    }
  }

  void addPoly(List l1, List l2) {
    Node *t1 = l1.head;
    Node *t2 = l2.head;

    List l3;

    while (t1 != NULL && t2 != NULL) {

      if (t1 == NULL || t2 == NULL) {
        cout << "Given polynomial are undefined";
        return;
      }

      if (t1->exponent == t2->exponent) {
        Node *newNode =
            new Node(t1->exponent, t1->coefficient + t2->coefficient);
        if (head == NULL) {
          head = tail = newNode;
        } else {
          tail->next = newNode;
          tail = newNode;
        }
      }

      if (t1->exponent < t2->exponent) {
        t1 = t1->next;
        return;
      }

      if (t1->exponent > t2->exponent) {
        t2 = t2->next;
        return;
      }
    }
  }
};

int main() {
  List l1;
  l1.createPoly();
  l1.printPoly();

  List l2;
  l2.createPoly();
  l2.printPoly();

  return 0;
}