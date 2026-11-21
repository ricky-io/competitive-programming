#include<studio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* CreateNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory allocation failed ! \n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertBegin(struct Node* head, int data){
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

struct Node* insertEnd(struct Node* head, int data){
    struct Node* newNode = createNode(data);
    if(head == NULL) return newNode;

    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

struct Node* insertAtPos(struct Node* head, int data, int pos){ // 1 based indexing
    struct Node* newNode = createNode(data);

    if(pos == 1) return insertBegin(head, data);

    struct Node* temp = head;

    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Invalid position \n");
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}