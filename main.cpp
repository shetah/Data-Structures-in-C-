#include <iostream>
#include <C:\Users\sheta\OneDrive\Desktop\DS-C++\linked-list.cpp>
using namespace std;

int main(){
  LinkedList list;
  list.append(10);
  list.append(20);
  list.append(30);
  list.append(20);
  
  cout << "Linked List after adding elemnts:"<<endl;
  list.display();
  list.insertAt(2,100);
  cout << "Linked list after adding element 100 in the second pos:"<<endl;
  list.display();
    list.insertAt(1,200);
  cout << "Linked list after adding element 200 in the first pos:"<<endl;
  list.display();
  list.deleteNode(30);
    cout << "Linked list after deleting element 30 :"<<endl;
  list.display();
 
  return 0;
}