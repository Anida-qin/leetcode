//解题思路

//链接：https://www.nowcoder.com/questionTerminal/6e630519bf86480296d0f1c868d425ad

//1）同linked-list-cycle-i一题，使用快慢指针方法，判定是否存在环，并记录两指针相遇位置(Z)； 
//2）将两指针分别放在链表头(X)和相遇位置(Z)，并改为相同速度推进，则两指针在环开始位置相遇(Y)。


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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL ) return NULL;
        
        ListNode *p = head;
        ListNode *p2 = head;
     
        do
        {
            if(p2 == NULL || p2->next == NULL) return NULL;
            p = p->next;
            p2 = p2->next->next;

        }
        while(p2 != p);
        
        p=head;
        while(p!=p2)
        {
            p=p->next;
            p2=p2->next;
        }
            
        return p;
    }
};