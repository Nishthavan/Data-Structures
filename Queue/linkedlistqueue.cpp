#include<iostream>
using namespace std;

class QNode{
public:
	 int data;
	 QNode* next;
};

class Queue{
public:
	QNode *front, *rear;
};

QNode* newnode(int k){
	QNode* node = new QNode();
	node->data = k;
	node->next = NULL;
	return node;
}

Queue* createqueue(){
	Queue* q = new Queue();
	q->front = q->rear = NULL;
	return q;
}

void enqueue(Queue* q, int key){
	QNode* qtemp = newnode(key);

	if(q->rear == NULL){
		q->rear = q->front = qtemp;
		return;
	}
    
    q->rear->next = qtemp;
    q->rear = qtemp;
}

QNode* dequeue(Queue* q){
	if (q->front == NULL) 
        return NULL; 
  
    QNode* temp = q->front; 
    q->front = q->front->next; 
  
    if (q->front == NULL) 
        q->rear = NULL;

    return temp; 
}

int main(int argc, char const *argv[]) 
{ 
    Queue* q = createqueue(); 
    enqueue(q, 10); 
    enqueue(q, 20); 
    dequeue(q); 
    dequeue(q); 
    enqueue(q, 30); 
    enqueue(q, 40); 
    enqueue(q, 50); 
    QNode* n = dequeue(q); 
    if (n != NULL) 
        cout << "Dequeued item is " << n->data; 
    return 0; 
} 

