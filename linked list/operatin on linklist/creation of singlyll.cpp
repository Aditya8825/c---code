// //creation of singly lnkedlist,,,,,,,,,,,,,,,,,,
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int Data;
//     Node* next;

//     Node(int val) {
//         Data = val;
//         next = NULL;
//     }
// };

// class List {
//     Node* head;
//     Node* tail;

// public:
//     List() {
//         head = tail = NULL;
//     }

//     void push_front(int val) {
//         Node* newNode = new Node(val);

//         if (head == NULL) {
//             head = tail = newNode;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void printLL() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->Data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main() {
//     int n, value;
//     List l;

//     cout << "Enter the number of nodes: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "Enter value for node " << i + 1 << ": ";
//         cin >> value;
//         l.push_front(value);   // INSERT INTO LIST
//     }

//     cout << "\nSingly Linked List:\n";
//     l.printLL();              // PRINT LIST

//     return 0;
// }




//insert a new node in back,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int Data;
//     Node* next;

//     Node(int val) {
//         Data = val;
//         next = NULL;
//     }
// };

// class List {
//     Node* head;
//     Node* tail;

// public:
//     List() {
//         head = tail = NULL;
//     }

//     void push_back(int val) {
//         Node* newNode = new Node(val);

//         if (head == NULL) {
//             head = tail = newNode;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void printLL() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->Data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main() {
//     int n, value;
//     List l;

//     cout << "Enter the number of nodes: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "Enter value for node " << i + 1 << ": ";
//         cin >> value;
//         l.push_back(value);   // INSERT INTO LIST
//     }

//     cout << "\nSingly Linked List:\n";
//     l.printLL();              // PRINT LIST

//     return 0;
// }



//insert at specific position ,,,,,,,,,,,,,,,,,,,,
//  
#include <iostream>
using namespace std;

class Node {
public:
    int Data;
    Node* next;

    Node(int val) {
        Data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    // Insert at front
    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Insert at end
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Insert at specific position
    void insert_at_position(int val, int pos) {
        if (pos == 0) {
            push_front(val);
            return;
        }

        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position out of range\n";
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL)
            tail = newNode;
    }

    // Print linked list
    void printLL() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->Data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l;

    l.push_front(10);
    l.push_back(30);
    l.insert_at_position(20, 1);  // Insert 20 at position 1

    cout << "Singly Linked List:\n";
    l.printLL();

    return 0;
}
