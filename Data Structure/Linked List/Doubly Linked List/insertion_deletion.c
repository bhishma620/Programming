//All operations of a doubly linked list.....
#include <stdio.h>
#include <stdlib.h>
typedef struct st
{
    int info;
    struct st *prev;
    struct st *next;
} node;
node *start = NULL;

// inserting node at begining
void atbeg(int val)
{
    node *newptr;
    newptr = (node *)malloc(sizeof(node));
    newptr->info = val;
    newptr->next = NULL;
    newptr->prev = NULL;
    if (start == NULL)
    {
        start = newptr;
    }
    else
    {
        newptr->next = start;
        start = newptr;
    }
}

// inserting node at the end
void atend(int val)
{
    node *newptr, *temp;
    newptr = (node *)malloc(sizeof(node));
    newptr->info = val;
    newptr->next = NULL;
    newptr->next = NULL;
    if (start == NULL)
    {
        start = newptr;
    }
   
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newptr->prev = temp;
        temp->next = newptr;
    }
}

// inserting at any position
void atpos(int val, int pos)
{
    node *newptr, *temp;
    int i = 1, c = 0;
    newptr = (node *)malloc(sizeof(node));
    newptr->info = val;
    newptr->next = NULL;
    newptr->prev = NULL;
temp=start;
while(temp!=NULL){
    temp=temp->next;
    c++;
}

    if (start == NULL)
    {
        start = newptr;
    }
    else if (pos == 1)
    {
        atbeg(val);
    }
     else if(pos>c+1){
        printf("WRONG POSITION!!\n");
     }
    else
    {
        temp = start;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newptr->next = temp->next;
        newptr->prev = temp;
        temp->next = newptr;
    }
}

// Deletion from begining
void delete_beg()
{
    node *temp;
    if (start == NULL)
    {
        printf("EMPTY!!!\n");
    }
    else
    {
        temp = start;
        printf("YOU HAVE DELETED %d \n", temp->info);
        start = start->next;
        free(temp);
    }
}
// deletion from end
void delete_end()
{
    node *temp, *temp1;
    if (start == NULL)
    {
        printf("EMPTY!!!\n");
    }
     else if(start->next==NULL){
        printf("YOU HAVE DELETED %d\n",start->info);
       free(start);
       start=NULL;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp1 = temp;
            temp = temp->next;
        }
        printf("YOU HAVE DELETED %d \n", temp->info);
        temp1->next = NULL;
        free(temp);
    }
}
//deletion from any position 
void delete_pos(int pos){
node *temp,*temp1;
int i=1,c=0;
temp=start;
while(temp!=NULL){
    temp=temp->next;
    c++;
}
if(start==NULL){
    printf("EMPTY!!\n");
}
else if(pos==1){
    delete_beg();
}
else if(pos>c){
    printf("WRONG POSITION!!\n");
}
else{
    temp=start;
    while(i<pos-1){
        temp=temp->next;
    }
    temp1=temp->next;
    printf("YOU HAVE DELETED %d !!\n",temp1->info);
    temp->next=temp1->next;
    free(temp1);

}




}
// displaying the list

void display(node *temp)
{
    temp = start;
    while (temp != NULL)
    {
        printf("%d<>", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int val, ch, pos, n=1;
    while(n!=0){
        printf("CHOISES: \n1.Insertion at begining \n2.Insertion at end \n3. Insertion at any position \n4.Display \n5.Delete at Begining \n6. Delete at End \n7.Deltete at Any Positon \n0.Exit\n");
        scanf("%d", &ch);
       n=ch;
        switch (ch)
        {
        case 1:
            printf("Enter the val: ");
            scanf("%d", &val);
            atbeg(val);
            break;
        case 2:
            printf("Enter the val: ");
            scanf("%d", &val);
            atend(val);
            break;

        case 3:
            printf("Enter the val: ");
            scanf("%d", &val);
            printf("Enter the position : ");
            scanf("%d", &pos);
            atpos(val, pos);
            break;

        case 4:
            display(start);
            break;

        case 5:
            delete_beg();
            break;
        case 6:
            delete_end();
            break ;  

        case 7:
        printf("Enter position: ");
        scanf("%d",&pos);
        delete_pos(pos);
        break;
        default:
        printf("Enter Right Choise!!\n");
            break;
        }
    } 

    return 0; 
}
