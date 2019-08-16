#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
};

void push(node** head, int data){
 
     node* newnode = new node();
     newnode->data = data;
     newnode->next = (*head);
     (*head) = newnode;
} 

void print(node* head){
	
	while( head != NULL ){
      cout<<head->data;
      cout<<"->>";
      head = head->next;
	}
}
 
void deleteNode(node** headref,int key){
	node* temp = *headref, *prev;
	
	if( temp!=NULL && temp->data == key){
       *headref = temp->next;
       free(temp);
       return;
	}

	while(temp!=NULL && temp->data !=key){
		prev = temp;
		temp = temp->next;
	}

	prev->next = temp->next;
	free(temp);
	return;
}

int main(int argc, char const *argv[])
{
     node* head = NULL;
     push(&head,1);
     push(&head,2);
     push(&head,3);
     push(&head,4);
     push(&head,5);
     push(&head,6);
     push(&head,7);
     push(&head,8);
     push(&head,9);
     push(&head,10);
     push(&head,11);
     push(&head,12);
     print(head);
     deleteNode(&head,6);
     print(head);
	return 0;
}

