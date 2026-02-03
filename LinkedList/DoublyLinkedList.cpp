#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* previous;

    Node(int val){
        data = val;
        next = nullptr;
        previous = nullptr;
    }
};

void insertionEnd(Node* (&head),int val){
    Node* node = new Node(val);

    if(head == nullptr){
        head = node;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = node;
    node->previous = temp;

}

void insertAtBegin(Node* (&head), int val){
    Node* node = new Node(val);
    if(head == nullptr){
        head = node;
        return;
    }
    node->next = head;
    head->previous = node;
    head = node;
}

void insertAtN(Node* (&head), int val, int N){
    Node* node = new Node(val);
    Node* temp = head;

    for(int i=1; i<N-1 && temp != nullptr; i++){
        temp = temp->next;
    }
    if(temp == nullptr)return;
    node->next = temp->next;
    temp->next = node;
    node->previous = temp;

}

void print(Node* (&head)){
    Node* node = head;
    while(node != nullptr){
        cout<<node->data<<" ";
        node = node->next;
    }
}
int main(){
    Node* head = nullptr;
    insertAtBegin(head,2);
    insertAtBegin(head,5);
    insertionEnd(head,8);
    insertAtN(head,10,3);
    print(head);
}