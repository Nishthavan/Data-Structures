#include<iostream>
using namespace std;

#define MAX 100

class stack
{
	int top;
public:
	
	int a[MAX];
	bool push (int item);
	int pop ();
};

bool stack::push(int x){
	if (top>=(MAX-1)){
		cout<<"OVERFLOW";
		return false;
	}
	else {
        a[++top] = x;
        cout<<x<<"pushed in stack";
        return true;
         }
}

int stack::pop(){
	if (top < 0){
		cout<<"UNDERFLOW";
		return 0;
	}
	else {
		int x = a[top--] ;
		cout<<x<<"popped from stack";
		return x;
	}

} 
 int main(int argc, char const *argv[])
 {
 	stack s;
 	s.push(10);
 	s.push(20);
 	s.push(99);
 	cout<<s.pop();
 	return 0;
 }