//Singly Linked list all operations.................

#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int info;
	struct st *link;
}node;
node *start=NULL;

//insert at the begining node

void atbegin(int val){
	node *newptr=NULL; 
newptr=(node*)malloc(sizeof(node));
newptr->info=val;
newptr->link=NULL;
if(start==NULL){
	start=newptr;
}
else{
	newptr->link=start;
	start=newptr;
}
		
	}


//inserting node at end

void atend(int val){
	node *newptr=NULL,*temp=NULL;
	newptr=(node*)malloc(sizeof(node));
	newptr->info=val;
	newptr->link=NULL;
	if(start==NULL){
		start=newptr;
	}
	else{
		temp=start;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=newptr;
	}
}

//inserting node at any position

void atpos(int val,int pos){
	node *newptr=NULL,*temp=start;
	int i=1,c=0;
	while(temp!=NULL){
		temp=temp->link;
		c++;
	}
	if(pos==c+1){
	   atend(val);
	}
	else if(pos>c+1){
		printf("Wrong positon!\n");
	}
	else if(pos==1){
		atbegin(val);
	}
	else{
	
	newptr=(node*)malloc(sizeof(node));
	newptr->info=val;
	newptr->link=NULL;
	if(start==NULL){
		start=newptr;
	}
	else{
		temp=start;
		while(i<pos-1){
			temp=temp->link;
			i++;
		}
		newptr->link=temp->link;
		temp->link=newptr;
	}
}
}

//delete at begining
void delbegin(){
		node *temp;
	if(start==NULL){
		printf("Empty list!\n");
	}
	else{
	

	temp=start;
	start=start->link;
	printf("YOU have delteted %d !!\n",temp->info);
	free(temp);
}
}

//delete at end
void delend(){
	node *temp,*last;
	if(start==NULL){
		printf("Lis empty\n");
	}
	else{
		temp=start;
		last =start;
		while(temp->link!=NULL){
			last=temp;
			temp=temp->link;
		}
		last->link=NULL;
		printf("You have deleted %d !!\n",temp->info);
		free(temp);
	}
}
//delete at any pos
void delpos(int pos){
	node *temp,*new;
	int i=1,c=0;
	temp=start;
	while(temp!=NULL){
		c++;
		temp=temp->link;
	}
	
	if(pos==1){
		delbegin;
	}
	else if(pos>c){
		printf("Wrong position!!\n");
		
	}
	
	else {
		temp=start;
		while(i<pos-1){
			temp=temp->link;
			i++;
		}
		new=temp->link;
		temp->link=new->link;
		printf("You have deleted %d !!!",new->info);
		free(new);
	}
	
	
}

//display
void display(node* temp){
	while(temp!=NULL){
		printf("%d->",temp->info);
		temp=temp->link;
	}
	printf("NULL\n");
}


int main (){
	int val,ch,pos;
	do{
		printf("CHOISES: \n1.Insertion at begining \n2.Insertion at end \n3.Insertion at any position \n4.Display \n5.Delete at begin \n6.Delete at End \n7.Delete at any position \n0.Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter data: ");
				scanf("%d",&val);
				atbegin(val);
				break;
		
	    	case 2:
			printf("Enter data: ");
			scanf("%d",&val);
			atend(val);
			break;
			
	       case 3:
	    	printf("Enter data: ");
			scanf("%d",&val);
			printf("Enter position: ");
			scanf("%d",&pos);
			atpos(val,pos);
			break;
		
		   case 4:
			printf("Your node elements are: \n");
			display(start);
			break;
			case 5:
				delbegin();
				break;
			case 6:
				delend();
				break;
			case 7:
				printf("Enter position: ");
				scanf("%d",&pos);
				delpos(pos);
				break;
		default:
				printf("enter right options!\n");
				break;
		}
	}while(ch!=0);
	

	
	return 0;
}
