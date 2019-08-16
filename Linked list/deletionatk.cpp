#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void push(node** headref,int data){
	node* newnode = new node();
	newnode->data = data;
	newnode->next = *headref;
	*headref = newnode;
}

void print(node* head){

	while(head!=NULL){
		cout<<head->data;
		cout<<"-->";
		head = head->next;
	}
}

void deleteatpos(node** headref, int position){
   if (*headref == NULL) 
      return; 

   node* temp = *headref;
   if(position == 0){
       *headref = temp->next;
       free(temp);
       return;
   }

   while(position!=1 && temp!=NULL){
   	temp = temp->next;
   	position--;
   }
   if (temp == NULL || temp->next == NULL) 
         return; 
  node* next = temp->next->next;
  free(temp->next);
  temp->next = next;

}

int main(int argc, char const *argv[])
{
	node* head = NULL;
	push(&head,1);
	push(&head,4);
	push(&head,9);
	push(&head,16);
	print(head);
	cout<<endl;
	deleteatpos(&head,3);
	print(head);
	cout<<endl;
	return 0;
}