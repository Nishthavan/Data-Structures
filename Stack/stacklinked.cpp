#include<iostream>
using namespace std;

class linkedstack{
  public:
  	int data;
  	linkedstack* next;
};

linkedstack* newnode(int data){
	linkedstack* node = new linkedstack();
	node->data = data;
	node->next = NULL;
	return node;
}

void push (linkedstack** head, int data){
	linkedstack* stacknode = newnode(data);
	stacknode->next = *head;
	*head = stacknode;
	cout<<data<<"***** pushed to stack *******";
	return;
}

int pop(linkedstack**head){
	if((*head) == NULL){
		cout<<"underflow";
		return 0;
	}
	int x = (*head)->data;
	(*head) = (*head)->next;
	cout<<"popped from stack ->>";
	return x;
}

int main(int argc, char const *argv[])
{
	linkedstack* stack = NULL;
	push(&stack,10);
	push(&stack,20);
	push(&stack,30);
	push(&stack,90);

	cout<<pop(&stack);

	return 0;
}