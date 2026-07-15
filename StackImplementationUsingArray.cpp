#include <iostream>

using namespace std;

int *arr;
int topPtr = 0, len;

void push(int val){
    
    if(topPtr + 1 > len){
        cout << "Overflow!" << endl << endl;
    }
    else{
        arr[topPtr++] = val;
    }
    cout << "top position: " << topPtr << endl;
}

void pop(){
    if(topPtr == 0){
        cout << "Underflow!" << endl << endl;
        return;
    }
    else{
        topPtr--;
    }
}

void peek(){
    if(topPtr == 0){
        cout << "Empty set" << endl;
    }
    else{
        cout << arr[topPtr - 1] << endl;
    }
}

void isEmpty(){
    if(topPtr == 0){
        cout << "Yes empty" << endl;
    }
    else{
        cout << "Not empty" << endl;
    }
}

void printArray(){
    for(int ind = 0; ind < len; ind++){
        cout << arr[ind] << endl;
    }
    cout << endl;
}

int main(){
    int choice, size, val;
    cout << "Enter the size of the stack: ";
    cin >> size;
    int ds[size];
    arr = ds;
    len = size;

    while(true){
        cout << "Choose option from the menu:" << endl;
        cout << "1. Push an element" << endl;
        cout << "2. Pop an element" << endl;
        cout << "3. Top element of the stack" << endl;
        cout << "4. Is empty?" << endl;
        cout << "5. Print the stack" << endl;
        cout << "-1. Exit" << endl;
        cout << endl;
        cout << "Option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element: ";
            cin >> val;
            push(val);
            break;
        case 2:
            cout << "Popping" << endl;
            pop();
            break;
        case 3:
            cout << "Top element is: ";
            peek();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            printArray();
            break;
        case -1:
            cout << "Exitting" << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}