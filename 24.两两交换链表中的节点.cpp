/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* ans = new ListNode(0, head);
        ListNode* node_ptr = ans;
        while(node_ptr->next!=nullptr&&node_ptr->next->next != nullptr){
            node_ptr = swithch2Nodes(node_ptr);
        }
        return ans->next;
    }

    ListNode* swithch2Nodes(ListNode* head){
        ListNode* first_node = head->next;
        head->next=first_node->next;
        first_node->next = first_node->next->next;
        head->next->next = first_node;
        head = head->next->next;
        return head;
    }
};
// @lc code=end

