class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        
        if( head==NULL)
        {
            return NULL;
        }
        if( head->next==NULL)
        {
            delete  head;
            return NULL;
        }
        
        
        Node* slow=head;
        Node* fast=head;
        Node * prev=head;
        
        while ( fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
        prev=slow;
            slow=slow->next;
            
        }
        prev->next=slow->next;
        delete slow;
        
        return head;
    }
};
