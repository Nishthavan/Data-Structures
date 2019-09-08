#include<iostream>
using namespace std;

class stack{
   public:
   	int data;
   	stack* next;
};

void push(stack**s,int x){
	stack* temp = new stack();

	temp->data = x;
	temp->next = (*s);

	temp = (*s);
	return;
}

int pop(stack**s){
	int x;
	stack* temp1 = new stack();
	x = (*s)->data;
	temp1 = (*s);
    (*s) = (*s)->next;
    free(temp1);
    return x;
}

int top(stack*s){
	int c = s->data;
	return c;
}

int isempty(stack*s){
	if(s==NULL){
		return 1;
	}

	return 0;
}

void print(stack*s){
	while(!isempty(s)){
		cout<<s->data<<"-->";
		s = s->next;
		return;
	}
	return;
}

void sortinsrt(stack**s){
	if(isempty(*s)|| x>top(*s)){
		push(s,x);
		return;
	}
    int temp = pop(s);
    sortinsrt(s,x);

    push(s,temp);
}

void sort(stack**s){
	if(!isempty(*s)){
		int top = top(*s);
		sort(s);
		sortinsrt(s,top);
	}
	return;
}

int main(int argc, char const *argv[])
{
	stack* hel = NULL;
	push(&hel, 30); 
    push(&hel, -5); 
    push(&hel, 18); 
    push(&hel, 14); 
    push(&hel, -3);

    print(hel);

    sort(&hel);

    print(hel);
	return 0;
}















