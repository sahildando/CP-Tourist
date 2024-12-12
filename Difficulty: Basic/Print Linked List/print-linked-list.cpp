//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};


// } Driver Code Ends
/*
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
/*
    Print elements of a linked list on console
    Head pointer input could be NULL as well for empty list
*/

class Solution
{
    public:
  void printList(Node *head) {
        // iterating through the linked list
        while (head != nullptr) {
            // printing the data of current node
            cout << head->data << " ";
            // moving to the next node
            head = head->next;
        }
    }
};



    




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        // Building the linked list from input
        while (ss >> x) {
            if (head == nullptr) {
                head = new Node(x);
                tail = head;
            } else {
                tail->next = new Node(x);
                tail = tail->next;
            }
        }

        Solution ob;
        ob.printList(head);
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends