#include <iostream>
using namespace std;

class Node {
public:
  int data; //Data stored in the node
  Node* next; //Pointer to the next node
  
  // Constructor to initialize a node with a value and set the next pointer to nullptr
  Node(int value){
    data = value;
    next=nullptr;
  }
};

class LinkedList {
private:
  Node* head; //pointer to the first node in the list

public:
  //Constructor to initialize the head pointer to nullptr
  LinkedList() {
    head = nullptr;
  }
  
  //Function to add a node at the end of the list
  void append(int value){
    Node* newNode = new Node(value); //Create a new node
    if (head==nullptr){
      head = newNode; //if the list is empty, set the new node as the head
    } else{
      Node* temp = head;
      while (temp->next!=nullptr){
        temp=temp->next; //traverse to the last node
      }
      temp->next= newNode; //Linke the last node to the new node

    }
  }

  void addFirst(int value){
    Node* newNode = new Node(value);
    head->next=head; 
    head = newNode;
       
  }

  // Function to display the linked list
  void display(){
    Node* temp= head;
    while (temp!=nullptr){
      cout <<temp->data<<"->";
      temp = temp->next;
    }
    cout << "nullptr"<< endl;
  }

  //Function to delete a node by value
  void deleteNode(int value){
    if (head==nullptr) return; //if the list is empty, do nothing

    if(head->data == value){
      Node* temp = head; //If the node to be deleted is the head
      head = head->next; //Move the head to the next node
      delete temp; //Delete the old head
      return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data!=value){
      temp=temp->next; //Traverse the list to find the node to delete
    }

    if (temp->next == nullptr)return; //If the node was not found, do nothing

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next; //Unlink the node from the list
    delete nodeToDelete;
  }

  void insertAt(int pos,int value){
    Node* newNode = new Node(value);
    if (pos==1){
      newNode->next=head;
      head=newNode;
      return;
    }
    Node* temp1= head;
    for (int i=0; i<pos-2; i++){
      temp1=temp1->next;
    }
    newNode->next=temp1->next;
    temp1->next=newNode;
  }
};

