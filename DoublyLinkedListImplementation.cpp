#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int value){
            data = value;
            prev = NULL;
            next = NULL;
        }
};

Node* head = NULL;

void insertAtBegin(int val){
    Node* temp = new Node(val);
    Node* ptr = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtEnd(int val){
    Node* ptr = head;
    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
    }
    else{
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}

void traverseFromBegin(){
    if(head == NULL){
        cout << "Already empty!" << endl;
        return;
    }
    Node* ptr = head;
    while(ptr != NULL){
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << endl << endl;
}

void traverseFromEnd(){
    if(head->next == NULL){
        cout << "Already empty!" << endl;
        return;
    }
    Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    while(ptr != NULL){
        cout << ptr->data << ' ';
        ptr = ptr->prev;
    }

    cout << endl << endl;
}

void deleteBegin(){
    if(head == NULL){
        cout << "Already empty" << endl << endl;
        return;
    }
    Node* temp = head;
    if(head->next == NULL){
        head = NULL;
    }
    else{
        head = head->next;
        head->prev = NULL;
    }
    delete temp;
}

void deleteEnd(){
    if(head == NULL){
        cout << "Already empty" << endl << endl;
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
    }
    else{
        Node* ptr = head;
        Node* temp;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        temp = ptr->prev;
        ptr->prev = NULL;
        temp->next = NULL;
        delete ptr;
    }
}

int main(){
    int choice, val;
    while(true){
        cout << "Choose option from the menu:" << endl;
        cout << "1. Insert at the beginning" << endl;
        cout << "2. Insert at the end" << endl;
        cout << "3. Traversal from beginning" << endl;
        cout << "4. Traversal from end" << endl;
        cout << "5. Deletion from beginning" << endl;
        cout << "6. Deletion from end" << endl;
        cout << "-1. Exit" << endl << endl; 

        cout << "Option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> val;
            insertAtBegin(val);
            break;
        case 2:
            cout << "Enter the value: ";
            cin >> val;
            insertAtEnd(val);
            break;
        case 3:
            cout << "Traversing from the beginning" << endl;
            traverseFromBegin();
            break;
        case 4:
            cout << "Traversing from the end" << endl;
            traverseFromEnd();
            break;
        case 5:
            cout << "Deleting the beginning node" << endl;
            deleteBegin();
            break;
        case 6:
            cout << "Deleting the end node" << endl;
            deleteEnd();
            break;
        case -1:
            return 0;
            break;
        default:
            cout << "Invalid option" << endl << endl;
            break;
        }
    }
}