#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};


void insertionAtBegin(Node * (&head), int val){
    Node* temp = new Node(val);

    if(head == nullptr){
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
   
}


// void insertionAtMiddle(Node* head, int val){
//     Node* node = new Node(val);
//     Node* temp = head;
//     Node* start = nullptr;
//     Node* end = nullptr;
//     while(end->next != nullptr && end->next->next != nullptr){
//         start = start->next;
//         end = end->next->next;
//     }
//     start->next = node;
//     node->next->next = 
// }



void insertionAtEnd(Node *&head, int val){
    Node* node = new Node(val);
    Node* temp = head;
    if(head == nullptr){
        head = node;
        return;
    }
    while(temp->next != nullptr){
        temp = temp -> next;
    }
    temp->next = node;
}


void insertAtN(Node* (&head), int val, int n){
    Node* temp = head;
    Node* node = new Node(val);
    // Node* slow = temp;
    if(n==1){
        node->next = temp;
        temp = node;
        head = temp;
        return;
    }
    
    
    for(int i= 1; i<n-1 && temp != nullptr; i++){
        temp= temp->next;
    }
    if(temp == nullptr)return;
    node->next = temp->next;
    temp->next = node;


}

void DeletionFromeBegin(Node* (&head)){
    if(head==nullptr)return;
    Node* temp = head;
    head = head->next;
    delete temp;
}
void DeletionFromEnd(Node* (&head)){

    if(head == nullptr)return;
    if(head->next == nullptr){
        head = nullptr;
    }
    Node* node = head;
    while(node->next->next != nullptr){
        node = node->next;
    }
    node->next = nullptr;
    // head = node;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){

    // Node *n1 = new Node(1);
    // Node *head = n1;
    // Node *n2 = new Node(2);

    // n1->next = n2;
    // cout<<n1->data<<endl;

    Node* head = nullptr;
    // insertionAtEnd(head, 4);
    insertionAtBegin(head,2);
    printLinkedList(head);
    // insertionAtBegin(head,3);
    // insertionAtBegin(head,4);
    // insertionAtBegin(head,9);
    DeletionFromEnd(head);
    // insertAtN(head,10,1);
    printLinkedList(head);

}