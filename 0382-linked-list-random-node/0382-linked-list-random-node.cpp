class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least
       one node. */
    Solution(ListNode* head) : head_(head) {
        ListNode* curr = head;
        length_ = 0;
        while (curr) {
            length_++;
            curr = curr->next;
        }
    }

    /** Returns a random node's value. */
    int getRandom() {
        int step = rand() % length_;
        ListNode* ret = head_;
        while (step-- != 0) {
            ret = ret->next;
        }
        return ret->val;
    }

private:
    ListNode* head_;
    int length_;
};
