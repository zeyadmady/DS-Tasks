#include<iostream>
using namespace std;

struct node {
    int data ;
    node* next; 
};

node* top =NULL;

void display();
void push(int value);
int pop();
int peak();

int main() {

    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    cout << "top = " << peak();

    return 0;
}

void push(int value) {
   node* new_node = new node;
   new_node->data = value;
   new_node->next = top;
   top = new_node;
}
int pop() {
    int value ;
    if (top == NULL) {
          cout << "stack underflow. << \n";
          return -1 ;  
    }
    else {
        node* first_node = top;
        top = first_node->next;
        value = first_node->data;
        delete(first_node) ;
        return value;
    }
}

int peek() {
    if (top == NULL) {
        cout << "stack underflow. \n";  
        return -1;
    }    
    else {   
       return top->data;
    }
}
void display() {
    node* current;
    if (top == NULL) {
        cout << " stack underflow. ";
    }
    else{
      current = top;
      while (current != NULL) {
           cout << current->data << "\n";
           current = current->next ;
      }
      cout << endl;
   }
}