/*

struct Node{
int data;
struct Node * next;
};

*/

struct Node* reverseList(struct Node *head)
    {
        struct Node *curr,*prev,*next;
        prev=NULL;
        curr=next=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
