class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
       
        
        if(head == NULL || head ->next == NULL){
            return head;
        }
        
        Node *ptr = head;
        Node *curr = NULL;
        
        while(ptr!= NULL && ptr ->next !=  NULL){
            Node *next  = ptr->next;
            ptr ->next = next->next;
            next->next = ptr;
            
            if(curr != NULL){
                curr->next = next;
            }
            if(ptr == head){
                head = next;
            }
            curr = ptr;
            ptr = ptr->next;
            
        }
        return head;
    }
    
};
