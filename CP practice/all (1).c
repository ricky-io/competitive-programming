#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at beginning
struct Node* insertBegin(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Insert at end
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL) return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Insert at position (1-based index)
struct Node* insertAtPos(struct Node* head, int data, int pos) {
    if (pos == 1)
        return insertBegin(head, data);

    struct Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position\n");
        return head;
    }

    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Delete from beginning
struct Node* deleteBegin(struct Node* head) {
    if (head == NULL) return NULL;

    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Delete from end
struct Node* deleteEnd(struct Node* head) {
    if (head == NULL) return NULL;

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
    return head;
}

// Delete by value
struct Node* deleteValue(struct Node* head, int key) {
    if (head == NULL) return NULL;

    if (head->data == key)
        return deleteBegin(head);

    struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != key)
        temp = temp->next;

    if (temp->next == NULL) {
        printf("Value not found\n");
        return head;
    }

    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);

    return head;
}

// Traverse / Display
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Count nodes
int countNodes(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Search element
int search(struct Node* head, int key) {
    int pos = 1;
    while (head != NULL) {
        if (head->data == key)
            return pos;
        head = head->next;
        pos++;
    }
    return -1;
}

// Reverse list
struct Node* reverse(struct Node* head) {
    struct Node *prev = NULL, *curr = head, *next;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Find middle
void findMiddle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow)
        printf("Middle: %d\n", slow->data);
}

// GCD function
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// GCD of list
int findGCD(struct Node* head) {
    if (!head) return 0;

    int result = head->data;
    head = head->next;

    while (head != NULL) {
        result = gcd(result, head->data);
        head = head->next;
    }
    return result;
}

// Main function (for exam use)
int main() {
    struct Node* head = NULL;
    int n, x;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &x);
        head = insertEnd(head, x);
    }

    printf("Linked List:\n");
    display(head);

    // Delete operations
    head = deleteBegin(head);
    head = deleteEnd(head);
    head = deleteValue(head, 15);

    display(head);

    // Other operations
    printf("Count: %d\n", countNodes(head));
    printf("Search 20 at position: %d\n", search(head, 20));

    head = reverse(head);
    display(head);

    findMiddle(head);

    printf("GCD of list: %d\n", findGCD(head));

    return 0;
}