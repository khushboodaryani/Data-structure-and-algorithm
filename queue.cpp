#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
       data = val;
       next = NULL;
    }

};
class Queue{
    Node* head;
    Node* tail;
    // queue constructor to intiliaze head and tail with null
    public: 
     Queue(){
        head = tail = NULL;
    }
    void push(int data){
      Node* newNode = new  Node(data);
    // if list is empty head and tail both point to newNode
      if(empty()){
        head = tail = newNode;
      }else{
        // if not then newNode added to the tail mean tail now point to the newNode and newNode value assign to the tail
         tail->next = newNode;
         tail = newNode;
      }
    }
    void pop(){
       if(empty()){
        cout << "LL is exmpty";
        return;
       } 
       // head is stored at temp
       // head will point to the head ka next
       Node* temp = head;
       head = head->next;
       delete  temp;
    }
    int front(){
       if(empty()){
        cout << "LL is empty\n";
        return -1;
       }
       return head->data;
    }
    bool empty(){
       return head == NULL;
    }

};


int main(){
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
   
    while(!q.empty()){
        cout<< q.front() << " ";
        q.pop();
    }
    cout <<endl;
    return 0;
}