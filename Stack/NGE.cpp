#include <iostream>
#include <stack> 
using namespace std; 

void printNGE(int arr[], int n) { 
stack < int > s; 

s.push(arr[0]); 

for (int i = 1; i < n; i++) { 

	if (s.empty()) { 
	s.push(arr[i]); 
	continue; 
	} 

	while (s.empty() == false && s.top() < arr[i]) 
	{		 
		cout << s.top() << " --> " << arr[i] << endl; 
		s.pop(); 
	} 

	s.push(arr[i]); 
} 

while (s.empty() == false) { 
	cout << s.top() << " --> " << -1 << endl; 
	s.pop(); 
} 
} 

int main() { 
int arr[] = {9,88,7,66,5,44,3,22,1,0}; 
int n = sizeof(arr) / sizeof(arr[0]); 
printNGE(arr, n); 
return 0; 
}

