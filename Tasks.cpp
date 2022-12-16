#include<iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value);
void dequeue();
int peak();
void display();


int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); // 10 20 30
    dequeue(); 
    display(); // 20 30 
    cout << "peak = " << peak();
}

void enqueue(int value){
    if(rear != SIZE -1 ){

        if(front == -1 && rear == -1 ){
            rear++;
            front++;
            queue[rear] = value;
        }
        else{
            queue[++rear] = value;
        }

    }
    else{
        cout<< "queue is Full."<< endl;
    }
}
void dequeue() {
    if(front != -1 && rear != -1 && front <= rear){

        front++;
    }
    else{

        cout<< " queue is Empty "<<endl; 
    }
}
int peak(){
     if(front != -1 && rear != -1 && front <= rear){

       return queue[front];
    }
    else{

        cout<< " queue is Empty "<<endl; 
        return -1;
    }
}
void display(){
     if(front != -1 && rear != -1 && front <= rear){

       for( int i = front; i <= rear; i++){
            cout << queue[i] << "\t" ;
       }
       cout<< endl;
    }
    else{

        cout<< " queue is Empty "<<endl; 
        
}   }