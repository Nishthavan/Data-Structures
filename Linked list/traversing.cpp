#include<iostream>
using namespace std;

class node{
public:
   int data;
   node* next;
};

void print(node* nex){
  
   while(nex!=0){
       cout<<nex->data<<endl;
       nex = nex->next;
   }
}

int main(){
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;
    
    third->data = 15;
    third->next = NULL;

    print(head);
    return 0;
}