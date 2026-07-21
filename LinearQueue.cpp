#include <iostream>

using namespace std;

class Queue{
    public:
    int len;
    int front;
    int rear;
    int *arr;

    Queue(int size){
        len = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int val){
        if(rear == len){
            cout << "Overflow!" << endl;
            return;
        }
        if(rear == -1 && front == -1){
            front = 0;
        }
        rear++;
        arr[rear] = val;
        cout << "Added! " << arr[rear] << endl;
    }

    void dequeue(){
        if(front > rear || front >= len  || front == -1){
            cout << "Underflow!" << endl;
            return;
        }
        else{
            cout << arr[front] << ' ';
            front++;
        }
    }

    void display(){
        for(int ind = front; ind < rear; ind++){
            cout << arr[ind] << ' ';
        }
        cout << endl;
    }
};

int main(){
    int len;
    cout << "Enter the length of the queue: ";
    cin >> len;
    Queue myQueue(len);
    int choice, val;
    while(true){
        cout << "Select your choice:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "-1. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> val;
            myQueue.enqueue(val);
            cout << endl;
            break;
        
        case 2:
            myQueue.dequeue();
            cout << endl;
            break;
        
        case 3:
            myQueue.display();
            cout << endl;
            break;
        case -1:
            cout << "Exitting" << endl;
            cout << endl;
            return 0;
        default:
            cout << "INVALID CHOICE" << endl;
            cout << endl;
            break;
        }
    }
}