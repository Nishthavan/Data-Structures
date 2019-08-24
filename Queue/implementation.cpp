#include<iostream>
using namespace std;

class Queue{
public:
     int front,rear,size;
     int capacity;
     int* arr;

Queue* createQueue(int capacity){
	Queue* queue = new Queue();
	queue->capacity = capacity;
	queue->front = queue->size = 0;
	queue->rear = capacity-1;
	queue->arr = new int[(queue->capacity * sizeof(int))];
	return queue;
}
};

int isempty(Queue* queue){
    return(queue->size == 0);
}

int isfull(Queue* queue){
    return(queue->size == queue->capacity);
}

void enqueue(int data,Queue* queue){
	if(isfull(queue))
	return ;
	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->arr[queue->rear] = data;
	queue->size += 1;
	cout<<data<<" ___ enqueued";
}

int dequeue(Queue* queue){
	if(isempty(queue)){
	return INT8_MIN;
}
    int item = queue->arr[queue->front];  
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size -= 1;
	cout<<"dequeued";
	return item;
}

int front(Queue* queue){
     if (isempty(queue)){
     	return INT8_MIN;
     }
     return queue->arr[queue->front];
}

int rear(Queue* queue){
     if (isempty(queue)){
     	return INT8_MIN;
     }
     return queue->arr[queue->rear];
}
int main()
{
    Queue* queue = createQueue(1000);  
  
    enqueue(10, queue);  
    enqueue(20, queue);  
    enqueue(30, queue);  
    enqueue(40, queue);  
  
    dequeue(queue); 
  
    cout << "Front item is " << front(queue) << endl;  
    cout << "Rear item is " << rear(queue) << endl;  
  
	return 0;
}