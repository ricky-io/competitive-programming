#include<stdio.h>
#include<stdlib.h>
// Struct Node
struct Node{
    int data;
    struct Node* next;
};

// Creating a new Node
struct Node* CreateNode(int data){
    struct Node* New_Node = (struct Node*)malloc(sizeof(struct Node));
    if(!New_Node){
        printf("Memory allocation failed ! \n");
        exit(1);
    }
    New_Node->data = data;
    New_Node->next = NULL;
    return New_Node;
}

// Insert at head
struct Node* insertBegin(struct Node* head, int data){
    Struct Node* New_Node = CreateNode(data);;
    New_Node->next = head;
    return New_Node;
}

// Insert at End
struct Node* insertEnd(struct Node* head, int data){
    Struct Node* New_Node = CreateNode(data);
    if(head == NULL) return New_Node;

    Struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = New_Node;
    return head;
}

// Insert at position
struct Node* insertAtPos(struct Node* head, int data, int pos){ //1 based indexing
    if(pos == 1) return insertBegin(head, data);
    struct Node* temp = head;

    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Invalid position \n");
        return head;
    }
    struct Node* newNode = CreateNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

struct Node* deleteBegin(struct Node* head){
    if(head == NULL) return NULL:
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct Node* deleteEnd(struct Node* head){
    if(head == NULL) return NULL;

    if(head->next == NULL){
        free(head);
        return NULL;
    }

    struct Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next == NULL;
    return head;
}

struct Node* deleteValue(struct Node* head, int data){
    if(head == NULL) return NULL;
}

void display(struct Node* head){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int count(struct Node* head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}

int search(struct Node* head, int key){
    int pos = 0;
    while(head!=NULL){
        pos++;
        if(head->data == key) return pos;
        head = head->next;
    }
    return -1;
}

struct Node* reverse(struct Node* head){
    struct Node* prev = NULL, *curr = head, *next;
    while(*curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}