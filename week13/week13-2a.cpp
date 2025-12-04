///week13-2a.cpp 學習計畫 Linked List 第3題
///21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = new ListNode(888);
        ans->next = ans2; ///把它們接起來
        ///先寫4行，熟悉一下資料結構「怎麼new? 怎麼把它接起來」
        return ans;
    }
};
