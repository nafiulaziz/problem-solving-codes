#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main() 
{
    vector<int> cars;

    ListNode* l1_node1 = new ListNode(1);
    ListNode* l1_node2 = new ListNode(3);
    ListNode* l1_node3 = new ListNode(4);
    l1_node1->next = l1_node2;
    l1_node2->next = l1_node3;

    ListNode* l2_node1 = new ListNode(1);
    ListNode* l2_node2 = new ListNode(2);
    ListNode* l2_node3 = new ListNode(4);
    ListNode* l2_node4 = new ListNode(7);
    ListNode* l2_node5 = new ListNode(10);
    l2_node1->next = l2_node2;
    l2_node2->next = l2_node3;
    l2_node3->next = l2_node4;
    l2_node4->next = l2_node5;

    ListNode* current = l1_node1;
    while (current != nullptr) 
    {
        cars.push_back(current->val);
        current = current->next;
    }

    current = l2_node1;
    while (current != nullptr) 
    {
        cars.push_back(current->val);
        current = current->next;
    }
    
    sort(cars.begin(), cars.end());

    cout << "Values in vector:\n";
    for (int car : cars) 
        cout << car << " ";

    return 0;
}
