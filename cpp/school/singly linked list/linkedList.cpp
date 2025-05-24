#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int data) : val(data), next(nullptr) {}
};

// Insert at beginning
void insertAtBegin(int data, ListNode **linkedList) {
    ListNode *node = new ListNode(data);
    node->next = *linkedList;
    *linkedList = node;
}

// Insert at specific position (0-indexed)
void insertAtPos(int data, int pos, ListNode **linkedList) {
    ListNode *newNodePtr = new ListNode(data);
    ListNode *it = *linkedList;

    // Insert at beginning if pos is 0
    if (pos == 0) {
        newNodePtr->next = *linkedList;
        *linkedList = newNodePtr;
        return;
    }

    for (int i = 0; i < pos - 1 && it != nullptr; ++i) {
        it = it->next;
    }

    if (it == nullptr) {
        cout << "Position out of bounds.\n";
        delete newNodePtr;
        return;
    }

    newNodePtr->next = it->next;
    it->next = newNodePtr;
}

// Delete at position (0-indexed)
void delAtPos(int pos, ListNode **linkedList) {
    ListNode *it = *linkedList;

    if (*linkedList == nullptr) return;

    // Delete head
    if (pos == 0) {
        ListNode *temp = *linkedList;
        *linkedList = (*linkedList)->next;
        delete temp;
        return;
    }

    for (int i = 0; i < pos - 1 && it != nullptr; ++i) {
        it = it->next;
    }

    if (it == nullptr || it->next == nullptr) {
        cout << "Position out of bounds.\n";
        return;
    }

    ListNode *temp = it->next;
    it->next = temp->next;
    delete temp;
}

// Display list
void display(ListNode *LinkedList) {
    ListNode *it = LinkedList;
    while (it) {
        cout << it->val << " ";
        it = it->next;
    }
    cout << endl;
}

int main() {
    ListNode *head = nullptr;
    int t;
    cout << "Enter no of initial nodes: ";
    cin >> t;
    cout << "Enter nodes: ";
    while (t--) {
        int temp;
        cin >> temp;
        insertAtBegin(temp, &head);
    }

    cout << "Original List: ";
    display(head);

    insertAtPos(100, 2, &head);
    cout << "After inserting 100 at position 2: ";
    display(head);

    delAtPos(2, &head);
    cout << "After deleting at position 2: ";
    display(head);

    return 0;
}