#include<iostream>
using namespace std;

class twostacks{

  	int *arr;
    int size;
    int top1;
    int top2;
 public: 
twostacks(int n){

	size = n;
    arr = new int[n];
	top1 = -1;
	top2 = size;
  }

void push1(int item){
   if(top1<top2-1){
   	top1++;
   	arr[top1] = item;
   	return;
   }

   else
   {
   	cout<<"OVERFLOW";
   	exit(1);
   }
}

void push2(int item){
	if(top1<top2-1){
		top2--;
		arr[top2] = data;
		return;
	}
	else
	{
		cout<<"OVERFLOW";
		exit(1);
	}
}
 
void pop1(){
	if(top1>=0){
		top1--;
		return;
	}
	else
	{
		cout<<"UNDERFLOW";
		exit(1);
	}
}

void pop2(){
	if(top2<size){
		top2++;
		return;
	}
	else
	{
		cout<<"UNDERFLOW";
		exit(1);
	}
}

void print(int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return;
}
};

int main(int argc, char const *argv[])
{
	twostacks ts(10);
	ts.push1(5); 
    ts.push2(21); 
    ts.push2(14); 
    ts.push1(10); 
    ts.push2(7);
    ts.print(10);
	return 0;
}