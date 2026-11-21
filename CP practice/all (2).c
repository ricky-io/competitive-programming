#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    if (!head) return newNode;

    struct Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Display list
void display(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

/////////////////////////////////////////////////////////
// 🔥 MERGE TWO SORTED LISTS (ITERATIVE)
/////////////////////////////////////////////////////////
struct Node* merge(struct Node* l1, struct Node* l2) {
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;

    while (l1 && l2) {
        if (l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = (l1) ? l1 : l2;
    return dummy.next;
}

/////////////////////////////////////////////////////////
// 🔥 FIND MIDDLE (FOR SORT)
/////////////////////////////////////////////////////////
struct Node* getMiddle(struct Node* head) {
    struct Node *slow = head, *fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

/////////////////////////////////////////////////////////
// 🔥 MERGE SORT (SORT LINKED LIST)
/////////////////////////////////////////////////////////
struct Node* mergeSort(struct Node* head) {
    if (!head || !head->next)
        return head;

    struct Node* mid = getMiddle(head);
    struct Node* second = mid->next;
    mid->next = NULL;

    struct Node* left = mergeSort(head);
    struct Node* right = mergeSort(second);

    return merge(left, right);
}

/////////////////////////////////////////////////////////
// 🔥 REMOVE DUPLICATES (SORTED LIST)
/////////////////////////////////////////////////////////
void removeDuplicates(struct Node* head) {
    struct Node* curr = head;

    while (curr && curr->next) {
        if (curr->data == curr->next->data) {
            struct Node* temp = curr->next;
            curr->next = temp->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }
}

/////////////////////////////////////////////////////////
// 🔥 MAIN FUNCTION (WITH USER INPUT)
/////////////////////////////////////////////////////////
int main() {
    struct Node *head1 = NULL, *head2 = NULL;
    int n1, n2, x;

    // Input first list
    printf("Enter number of elements in list1: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &x);
        head1 = insertEnd(head1, x);
    }

    // Input second list
    printf("Enter number of elements in list2: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &x);
        head2 = insertEnd(head2, x);
    }

    printf("\nList1: ");
    display(head1);

    printf("List2: ");
    display(head2);

    /////////////////////////////////////////////////////////
    // 🔥 SORT BOTH LISTS
    /////////////////////////////////////////////////////////
    head1 = mergeSort(head1);
    head2 = mergeSort(head2);

    printf("\nSorted List1: ");
    display(head1);

    printf("Sorted List2: ");
    display(head2);

    /////////////////////////////////////////////////////////
    // 🔥 MERGE BOTH SORTED LISTS
    /////////////////////////////////////////////////////////
    struct Node* merged = merge(head1, head2);

    printf("\nMerged List: ");
    display(merged);

    /////////////////////////////////////////////////////////
    // 🔥 REMOVE DUPLICATES
    /////////////////////////////////////////////////////////
    removeDuplicates(merged);
    printf("\nAfter Removing Duplicates: ");
    display(merged);

    /////////////////////////////////////////////////////////
    // 🔥 REVERSE FINAL LIST
    /////////////////////////////////////////////////////////
    merged = reverse(merged);
    printf("\nReversed List: ");
    display(merged);

    return 0;
}
