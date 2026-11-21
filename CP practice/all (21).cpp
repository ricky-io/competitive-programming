#include<iostream>
using namespace std;
//Linked class 

class Node{// Linked lists Node   // user defined data type
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }    
};
class LinkedList{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    
    LinkedList* addTwoNumbers(LinkedList* l1, LinkedList* l2) {
        
        
        
    }
    void insertAthead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
         else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main(){
    
    LinkedList l1;
    LinkedList l2;
    l1.insertAtEnd(2);   
    l1.insertAtEnd(4);
    l1.insertAtEnd(3);
    
    l2.insertAtEnd(5);
    l2.insertAtEnd(6);
    l2.insertAtEnd(4);


    
    l1.display();
    l2.display();
    
}
