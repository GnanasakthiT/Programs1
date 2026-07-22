#include <stdio.h>
#include <stdlib.h>

struct list{
    int data;
    struct list* next;
};

struct list* head = NULL;

void traverse(){
    if(head == NULL){
        printf("Empty set\n");
        return;
    }
    struct list* ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void insertAtBegin(int val){
    struct list* temp = (struct list*) malloc(sizeof(struct list));
    temp->data = val;
    if(head == NULL){
        temp->next = NULL;
    }
    else{
        temp->next = head;
    }
    head = temp;
}

void insertAtEnd(int val){
    struct list* temp = (struct list*) malloc(sizeof(struct list));
    temp->data = val;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        struct list* ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void insertAtMiddle(int val, int pos){
    struct list* temp = (struct list*) malloc(sizeof(struct list));
    temp->data = val;
    if(head == NULL){
        temp->next = NULL;
        head = temp;
    }
    else{
        struct list* ptr = head;
        int count = 1;
        while(count < pos - 1){
            ptr = ptr -> next;
            count++;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}


void deleteFirst(){
    if(head == NULL){
        printf("Already empty\n");
        return;
    }
    head = head->next;
}

void deleteLast(){
    if(head == NULL){
        printf("Already empty\n");
        return;
    }

    struct list* ptr = head;

    if(head->next == NULL){
        head = NULL;
        return;
    }

    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = NULL;
}

void deleteMiddle(int pos){
    int currPos = 1;
    if(head == NULL){
        printf("Already empty");
        return;
    }

    struct list* ptr = head;

    while(currPos < pos - 1){
        ptr = ptr->next;
    }

    ptr->next = ptr->next->next;
}

void middleElement(){
    if(head == NULL){
        printf("Empty list\n\n");
        return;
    }

    int len = 0;
    struct list* ptr = head;
    while(ptr != NULL){
        ptr = ptr->next;
        len++;
    }

    ptr = head;
    len /= 2;

    while(len--){
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
}

void middleElementOptimized(){
    struct list* fast = head;
    struct list* slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    printf("%d\n", slow->data);
}

int main(){

    struct list *ptr = head;
    while(1){
        
        printf("Choose the option:\n1.Insert at the End\n2.Insert at the beginner\n3.Insert at the middle\n4.Traverse\n5.Delete beginning\n6.Delete end\n7.Delete middle\n8.Find middle element\n-1.To exit\n\n");
        int choice, each, pos;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &each);
            insertAtEnd(each);
            break;

        case 2:
            printf("Enter the value: ");
            scanf("%d", &each);
            insertAtBegin(each);
            break;

        case 3:
            printf("Enter the value: ");
            scanf("%d", &each);
            printf("Enter the position: ");
            scanf("%d", &pos);
            insertAtMiddle(each, pos);
            break;

        case 4:
            printf("Traversing\n");
            traverse();
            break;

        case 5:
            printf("Deleting the first node\n");
            deleteFirst();
            break;

        case 6:
            printf("Deleting the last node\n");
            deleteLast();
            break;

        case 7:
            printf("Deleting middle node\n");
            printf("Enter the position:");
            scanf("%d", &pos);
            deleteMiddle(pos);
            break;

        case 8:
            printf("Finding the middle element\n");
            middleElementOptimized();
            break;

        case -1:
            printf("Quiting\n");
            return 0;
            break;
            
        default:
            printf("INVALID OPERATION");
            break;
        }

        printf("\n\n");
    }
}