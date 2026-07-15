#include<iostream>

using namespace std;

struct node{
    int coeff;
    int pow;
    struct node* next;

    node(int c, int e){
        coeff = c;
        pow = e;
        next = NULL;
    }
};

struct node* temp = NULL;

void insert(int val, int power, struct node* ptr){
    ptr->next = new node(val, power);
    ptr = ptr->next;

}

void addPoly(struct node* p1, struct node* p2){

}

void display(struct node* ptr){
    temp = ptr;
    while(temp){
        cout << temp->coeff << " x^ " << temp->pow << " + ";
    }
}

int main(){
    int eachVal, eachPow, len;

    struct node* equation1 = NULL;
    struct node* equation2 = NULL;


    struct node* poly1 = equation1;
    struct node* poly2 = equation2;
    
    cout << "Enter the number of terms in the first polynomial: ";
    cin >> len;

    while(len--){
        cout << "Enter the coeff and power: ";
        cin >>  eachVal >> eachPow;
        
        insert(eachVal, eachPow, poly1);
    }

    cout << "Enter the number of terms in the second polynomial: ";
    cin >> len;

    while(len--){
        cout << "Enter the coeff and power: ";
        cin >>  eachVal >> eachPow;
        
        insert(eachVal, eachPow, poly2);
    }
    
    cout << "The first polynomial is:" << endl;
    display(equation1);

    cout << "The second polynomial is:" << endl;
    display(equation2);

    // struct node* result = addPoly(equation1, equation2);

    // cout << "The resultant polynomial is:" << endl;
    // display(result);
}