#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
};

void push(node** headref, int data){
	node* head = new node();
	head->data = data;
	head->next = *headref;
	*headref = head;
}

void print(node* head){
	while(head!= NULL){
		cout<<head->data<<"->";
		head = head->next;
	}
}

int count(node* head){
	int count = 0;
	node* current = head;
	while(current!=NULL){
		count++;
		current = current->next;
	}
    return count;
}

int getcount(node* head){
	if(head == NULL)
		return 0;

	return 1 + getcount(head->next);
}

int main(int argc, char const *argv[])
{
	node* head = NULL;
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	cout<<"iterative"<<count(head);
	cout<<"recursive"<<getcount(head);
	return 0;
}