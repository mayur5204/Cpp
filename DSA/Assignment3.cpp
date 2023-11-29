#include<iostream>
using namespace std;

class Qu{
int front,rear,size,maxl;
int arr[4];

public:
Qu(){
this->front = -1;
this->rear = -1;
this->size=0;
this->maxl=4;
}
void add(int data);
void remove();
void printQ();
};


void Qu :: add(int data){

if(front==-1 && rear==-1){
front=rear=0;
arr[rear]=data;
}
else if((rear+1)%maxl==front){
cout<<"The queue if full you can't add data"<<endl;
}
else{
rear=(rear+1)%maxl;
arr[rear]=data;
}
}

void Qu :: remove(){
if(front==rear==-1){
cout<<"The queue is empty"<<endl;
}
else if(front==rear){
cout<<"The last element you removed was :: "<<arr[rear]<<endl;
front==rear==-1;
}
else{
front=(front+1)%maxl;
}
}

void Qu :: printQ(){
if(front==rear==-1){
cout<<"the queue is empty cannot print queue"<<endl;
}
else{
int i=front;
cout<<"The elements in the queue are :: ";
while(i!=rear){
cout<<arr[i]<<" ";
i=(i+1)%maxl;
}
cout<<arr[rear];
}
}


int main(){

Qu q;

q.add(5);
q.add(72);
q.add(22);
q.add(11);
q.printQ();


}
































// #include <iostream>
// using namespace std;

// class CircularQueue {
// private:
//     int size;
//     int* queue;
//     int front, rear;

// public:
//     CircularQueue(int size) {
//         this->size = size;
//         this->queue = new int[size];
//         this->front = this->rear = -1;
//     }

//     ~CircularQueue() {
//         delete[] queue;
//     }

//     bool isEmpty() {
//         return front == -1; 
//     }

//     bool isFull() {
//         return (rear + 1) % size == front;
//     }

//     void enqueue(int item) {
//         if (isFull()) {
//             cout << "Queue is full. Cannot enqueue.\n";
//         } else {
//             if (isEmpty()) {
//                 front = rear = 0;
//             } else {
//                 rear = (rear + 1) % size;
//             }
//             queue[rear] = item;
//             cout << item << " enqueued to the queue.\n";
//         }
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is empty. Cannot dequeue.\n";
//             return -1; // Assuming -1 as an indicator of an error or empty queue
//         } else {
//             int removedItem = queue[front];
//             if (front == rear) {
//                 front = rear = -1;
//             } else {
//                 front = (front + 1) % size;
//             }
//             cout << removedItem << " dequeued from the queue.\n";
//             return removedItem;
//         }
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is empty.\n";
//         } else {
//             cout << "Queue elements: ";
//             int i = front;
//             do {
//                 cout << queue[i] << " ";
//                 i = (i + 1) % size;
//             } while (i != (rear + 1) % size);
//             cout << endl;
//         }
//     }
// };

// int main() {
//     CircularQueue cq(5);

//     cq.enqueue(1);
//     cq.enqueue(2);
//     cq.enqueue(3);
//     cq.display();

//     cq.dequeue();
//     cq.display();

//     cq.enqueue(4);
//     cq.enqueue(5);
//     cq.enqueue(6); // This will exceed the queue size and trigger a full condition
//     cq.display();

//     return 0;
// }
