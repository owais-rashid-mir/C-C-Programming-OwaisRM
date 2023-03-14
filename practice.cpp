#include <iostream>

using namespace std;

#define SIZE 5
int arr[SIZE];
int front = -1;
int rear = -1;


int isFull() 
{
    if ( (rear+1)%SIZE == front)
	    return 1;
    else
	    return 0;
}


int isEmpty() 
{
    if(front == -1 && rear == -1)
        return 1;
    else
        return 0;
}


void enqueue(int value)
{
    if (isFull() )
        cout << "Overflow\n";

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }

    else
    {
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
    }
}


void dequeue()
{

    if(isEmpty() )
        cout<< "Underflow\n";

    else if(front == rear)
    {
        front = rear = -1;
    }

    else
    {
        cout << "Dequed Elements= \n" << arr[front] << endl;
        front = (front + 1) % SIZE;
    }

}

void peek()
{

if (isEmpty())
	cout << "Queue is empty- Nothing to display\n";

else
	cout << "Element at front= " << arr[front] << endl;

}

void display()
{
    int i = front;
    if (isEmpty() )
        cout << "Queue is empty- Nothing to display\n";

    else
    {
        cout << "Elements in Queue are: \n";
        while (i != rear)
        {
            cout << arr[i] << endl;
            i = (i + 1) % SIZE;
        }
        cout << arr[rear] << endl;
    }

}



int main() {
    
   enqueue(11);
   enqueue(12);
   enqueue(13);
   enqueue(14);
   enqueue(15);
   display();

   dequeue();
   dequeue();
   display();
  
    enqueue(22);
    enqueue(23);
    display();
    
    return 0;
}