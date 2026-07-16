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

void insert(int val, int power, struct node* &ptr){
    if(ptr == NULL){
        ptr = new node(val, power);
        return;
    }

    temp = ptr;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new node(val, power);

}

struct node* addPoly(struct node* p1, struct node* p2){
    struct node* final = NULL;

    while(p1 != NULL && p2 != NULL){
        if(p1->pow == p2->pow){
            insert(p1->coeff + p2->coeff, p1->pow, final);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if(p1->pow > p2->pow){
            insert(p1->coeff, p1->pow, final);
            p1 = p1->next;
        }
        else{
            insert(p2->coeff, p2->pow, final);
            p2 = p2->next;
        }
    }

    while(p1 != NULL){
        insert(p1->coeff, p1->pow, final);
        p1 = p1->next;
    }

    while(p2 != NULL){
        insert(p2->coeff, p2->pow, final);
        p2 = p2->next;
    }

    return final;
}

void display(struct node* ptr){
    temp = ptr;
    while(temp->next){
        cout << temp->coeff << " x^" << temp->pow << " + ";
        temp = temp->next;
    }
    cout << temp->coeff;
}

int main(){
    int eachVal, eachPow, len;

    struct node* poly1 = NULL;
    struct node* poly2 = NULL;
    
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
    display(poly1);
    cout << endl;

    cout << "The second polynomial is:" << endl;
    display(poly2);
    cout << endl;

    struct node* result = addPoly(poly1, poly2);

    cout << "The resultant polynomial is:" << endl;
    display(result);
}