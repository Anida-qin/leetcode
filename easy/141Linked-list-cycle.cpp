// 解题思路

// 判断单链表里是否有环

// 快慢指针，你追我赶。注意异常条件处理。


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(head == NULL ) return false;
        
        ListNode *p = head;
        ListNode *p2 = head;
     
        do
        {
            if(p2 == NULL || p2->next == NULL) return false;
            p = p->next;
            p2 = p2->next->next;
            
            
        }
        while(p2 != p);
            
        return true;
        
    }
};