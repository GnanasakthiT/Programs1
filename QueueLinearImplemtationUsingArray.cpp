#include <iostream>

using namespace std;

class Queue{
    public:
    int *arr;
    int len;
    int front;
    int rear;

    Queue(int size){
        len = size;
        int temp[size];
        arr = temp;
        front = -1;
        rear = -1;
    }

    void enqueue(int val){
        if(front == len - 1){
            cout << "Overflow!" << endl;
            return;
        }
        if(rear == -1 && front == -1){
            rear = 0;
        }
        front++;
        arr[front] = val;
        cout << "Added!" << endl;
    }

    void dequeue(){
        if(front == -1 || front > rear || front >= len){
            cout << "Underflow!" << endl;
            return;
        }
        else{
            cout << arr[front] << ' ';
            front++;
        }
    }

    void display(){
        for(int ind = 0; ind < len; ind++){
            cout << arr[ind] << ' ';
        }
    }
};

int main(){
    Queue myQueue(5);
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
            break;
        
        case 2:
            myQueue.dequeue();
            break;
        
        case 3:
            myQueue.display();
            break;
        case -1:
            cout << "Exitting" << endl;
            return 0;
        default:
            cout << "INVALID CHOICE" << endl;
            break;
        }
    }
}