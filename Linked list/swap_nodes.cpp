#include<iostream>
using namespace std;

class node
{
public:
	 int data;
	 node* next;

	node(int val, node* next)
      : data(val), next(next)
    {
         
	}

	void print(){
		node* node = this;
		while(node!=NULL){
			cout<<node->data<<"->";
			node = node->next;
		}
		cout<<endl;
	}
};

void push(node** head, int data){

    *head = new node(data,*head);
}

void swapnodes(node** headref,int x, int y){
	if(x == y)
	    return;
	node **a = NULL , **b = NULL;
	while(*headref){
          if((*headref)->data == x){
               a = headref;
           }
          else if((*headref)->data ==y){
               b = headref;
          }     

       headref = &((*headref)->next);   
	}

	if(a && b){ 
  
        swap(*a, *b); 
        swap(((*a)->next), ((*b)->next)); 
    } 
} 

void swap(node* &a,node* &b){
	node* temp = a;
	a = b;
	b = temp;
}

int main() 
{ 
  
    node* start = NULL; 
  
    
    push(&start, 7); 
    start->print(); 
    push(&start, 6); 
    push(&start, 5); 
    start->print(); 
    push(&start, 4); 
    push(&start, 3); 
    push(&start, 2); 
    push(&start, 1); 
  
    cout << "Linked list before calling swap "; 
    start->print(); 
  
    swapnodes(&start, 6, 3); 
  
    cout << "Linked list after calling swap "; 
    start->print(); 
}