#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

};

void push(int ndata, node** head ){

	node* first = new node();
	first->data = ndata;
	first->next = (*head);
	(*head) = first;

}
void pushAT(node* prevnode, int ndata){

	 if(prevnode == NULL){
		cout<<"previous_node cannot be NULL";
		return;
	 }

	 node* newnode = new node();
	 newnode->data = ndata;
	 newnode->next = prevnode->next;
	 prevnode->next = newnode;

}
void append(node** head,int ndata){
    
     node* newnode = new node();
     newnode->data = ndata;
     newnode->next = NULL;
     node* last = *head;

     if (*head == NULL)
     {
     	*head = newnode;
     }
     if(last->next != NULL)
     {
        last = last->next;
     }

    last->next = newnode;
    return;
 }

void print(node* head){
	if(head == NULL){
		cout<<"EMPTY!!";
	}

	while(head != NULL){
		cout<<head->data;
        cout<<"->";
		head = head->next;
	}
}

int main(int argc, char const *argv[])
{
    node* head = NULL;
    push(9,&head);
    push(10,&head);
    append(&head,15);
    pushAT(head->next,11);
    pushAT(head->next->next,12);
    print(head);
	return 0;
}

















