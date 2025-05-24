#include <bits/stdc++.h>
using namespace std;

typedef struct ListNode
{
    int val;
    struct ListNode* next;
} ListNode;

ListNode* CreateNode(int data)
{
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    newNode->next = nullptr;
    return newNode;
}

ListNode* sortList(ListNode* head)
{
    vector<int> v;
    ListNode* i = head;
    while (i != nullptr)
    {
        v.push_back(i->val);
        i = i->next;
    }
    sort(v.begin(), v.end());
    ListNode* ans = CreateNode(-1); 
    ListNode* it = ans;
    for (auto j : v)
    {
        it->next = CreateNode(j);
        it = it->next;
    }

    return ans->next; 
}

int main()
{
    ListNode* aList = nullptr; 
    int n;
    cout << "Enter the number of nodes to add: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "The list is empty." << endl;
        return 0;
    }
    cout << "Enter the values: ";
    ListNode* it = nullptr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (aList == nullptr)
        {
            aList = CreateNode(temp);
            it = aList;
        }
        else
        {
            it->next = CreateNode(temp);
            it = it->next;
        }
    }

    cout << "\nThe List: ";
    ListNode* i = aList;
    while (i != nullptr)
    {
        cout << i->val << " ";
        i = i->next;
    }
    ListNode* sortedList = sortList(aList);

    cout << "\nThe sorted list: ";
    ListNode* k = sortedList;
    while (k != nullptr)
    {
        cout << k->val << " ";
        k = k->next;
    }
    cout << endl;

    return 0;
}