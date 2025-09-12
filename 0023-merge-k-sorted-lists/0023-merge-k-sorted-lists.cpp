class Solution {
 public:
  ListNode* mergeKLists(vector<ListNode*>& lists) {
    // Min-heap based on node values
    priority_queue<pair<int, ListNode*>,
                   vector<pair<int, ListNode*>>,
                   greater<pair<int, ListNode*>>> pq;
    
    // Push heads of all lists
    for (int i = 0; i < lists.size(); i++) {
      if (lists[i]) {
        pq.push({lists[i]->val, lists[i]});
      }
    }
    
    // Dummy node to build the merged list
    ListNode* dummyNode = new ListNode(-1);
    ListNode* temp = dummyNode;
    
    // Merge process
    while (!pq.empty()) {
      auto it = pq.top();
      pq.pop();
      
      if (it.second->next) {
        pq.push({it.second->next->val, it.second->next});
      }
      
      temp->next = it.second;
      temp = temp->next;
    }
    
    return dummyNode->next;
  }
};