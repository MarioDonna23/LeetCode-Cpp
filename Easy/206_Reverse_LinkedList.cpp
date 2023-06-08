/*
https://leetcode.com/problems/reverse-linked-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/*
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head; // Create a node and point it to the head
        ListNode* prev = NULL; 
        ListNode* next = NULL;

        while(current != NULL) // Iterate through the linked list
        {
            next = current->next; // Set next node as the node ahead
            current->next = prev; // Current node should point to the previous node
            prev = current; // Set the previous node as the current
            current = next; // Set current node to node ahead
        }

        head = prev;
        return head;
    }
};
*/

/* CODE IS COMMENTED OUT BECAUSE OF ListNode CLASS NOT BEING PRESENT!! */