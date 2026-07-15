#include <iostream>

using namespace std;

struct Node
{
    public:
    int data;
    struct Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node * head = NULL;

void push(int value){
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
}

void pop(){
    if(head != NULL){
        head = head->next;
    }
    else{
        cout << "Underflow" << endl << endl;
    }
}

void peek(){
    if(head == NULL){
        cout << "Empty set" << endl;
        return;
    }
    cout << head->data << endl << endl;
}

void isEmpty(){
    if(head == NULL){
        cout << "Yes empty" << endl << endl;
    }
    else{
        cout << "Not empty" << endl << endl;
    }
}

int main(){
    int option, val;
    while(true){
        cout << "Choose option from the menu:" << endl;
        cout << "1. Push an element" << endl;
        cout << "2. Pop element" << endl;
        cout << "3. Top element" << endl;
        cout << "4. Is empty" << endl;
        cout << "-1. Exit"; 
        cout << endl;
        
        cout << "Choice: ";
        cin >> option; 

        switch (option)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> val;
            cout << "Pushing" << endl;
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
        case -1:
            cout << "Exiting" << endl;
            return 0;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }

}