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


// void insertAtBegin(Node* (&head), int val){
//     Node* node = new Node(val);
//     if(head == nullptr){
//         head = node;
//         node->next = head;
//     }
    
// }

void insertAtEnd(Node* (&head), int val){
    Node* node = new Node(val);
    if(head == nullptr){
        head = node;
        head->next = head;
        return;
    }
    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;

}

void deleteEnd(Node* &head){
    if(head == nullptr)return;
    if(head -> next == head){
        head = nullptr;
        delete head;
    }
    Node* temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }
    Node* toDel = temp->next;
    temp->next = head;
    delete toDel;
}


void print(Node* (&head)){
    Node* temp = head;
    do{
        cout<< temp->data<<"->";
        temp = temp -> next;
    }while(temp!=head);
}
// void print(Node* (&head)){
//     Node* node = head;
//     while(node->next != nullptr){
//         cout<<node->data<<"->";
//         node = node->next;
//     }
// }

int main(){
    Node* head = nullptr;
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    insertAtEnd(head,7);
    insertAtEnd(head,8);
    deleteEnd(head);
    print(head);
}