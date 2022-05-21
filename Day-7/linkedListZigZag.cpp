class Solution
{
    public:
    Node *zigZag(Node* head)
    {
     // your code goes here
     bool flag = true;
     Node* temp = head;
     
     while(temp->next != NULL){
         if(flag){
             if(temp->data > temp->next->data){
                 swap(temp->data , temp->next->data);
             }
         }else{
             if(temp->data < temp->next->data){
                 swap(temp->data , temp->next->data);
             }
         }
         temp = temp->next;
         flag = !flag;
     }
     return head;
    }
};