#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

void addempty(node** last,int data){
	if(last!=NULL){
		return;
	}
	node* n = new node();
	n->data = data;
	*last = n;
	*last->next = *last;
}

void addbegin(node** last,int data){
	if(last == NULL){
		addempty(*last,data);
		return;
	}

	node* temp = new node();
	temp->data = data;
	*last->next = temp->next;
	*last->next = temp;
	return;
}

void addend(node** last,int data){
	if(last == NULL){
		addempty(*last,data);
		return;
	}

	node* temp1 = new node();
	temp1->data = data;
	*last->next = temp1->next;
	*last->next = temp1;
	temp1 = *last;
	return;
}

void addafter(node** last,int data,int item){
	if(*last == NULL){
		addempty(*last,data);
		return;
	}

	node* n = new node();
	n = *last->next;
	while(n->data != item){
       n = n->next;
       if(n == *last->next){
       	cout<<"ITEM NOT FOUND";
       	return;
       }
	}
	node* t = new node();
	t->data = data;
	n->next = t->next;
	n->next = t;
	return;
}

void print(node* last){
	if(last == NULL){
		cout<<"NOTHING IN IT ---====---";
		return;
	}
	node* p = new node();
	p = last->next;
    while(p !=NULL){
         cout<<p->data<<"->->";
         p = p->next;
         if(p == last->next){
         	return;
         }
    }
    
}

int main(int argc, char const *argv[])
{
    node *last = NULL; 
  
     addempty(&last, 6); 
     addbegin(&last, 4); 
     addbegin(&last, 2); 
     addend(&last, 8); 
     addend(&last, 12); 
     addafter(&last, 10, 8); 
  
    print(last); 
  
    return 0;
}











