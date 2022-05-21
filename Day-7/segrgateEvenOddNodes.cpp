// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* oddHead = new Node(-1);
        Node* evenHead = new Node(-1);
        Node* oddTail = oddHead;
        Node* evenTail = evenHead;
        
        Node* temp = head;
        while(temp!=NULL){
            if(temp->data % 2 == 0){
                //even
                evenTail->next = temp;
                evenTail = temp;
                temp = temp->next;
                evenTail->next = NULL;
            }else{
                //odd
                oddTail->next = temp;
                oddTail = temp;
                temp = temp->next;
                oddTail->next = NULL;
            }
        }
        evenTail->next = oddHead->next;
        return evenHead->next;
    }
};

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}