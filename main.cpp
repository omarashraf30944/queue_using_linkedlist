#include <cassert>
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class linkedqueue{
  private:
struct node{
    int item;
    node *next;
};  
node* frontptr;
int length;
node *rearptr;
public:
linkedqueue(){
frontptr = NULL;
rearptr= NULL;
length=0;
}

bool isEmpty(){
    return (length == 0);

}
void enqueue(int Element){

        
        node*newptr = new node;
        newptr->item = Element;
        newptr->next = NULL;
        
        if (length == 0)
            rearptr = frontptr = newptr;
        else
        {
            rearptr->next = newptr;
            rearptr = newptr;
        }
        length++;
    
}
void dequeue(){
    if(isEmpty()){
        cout<<"queue is empty "<<endl;
    }else{
        node*temp = frontptr;
        frontptr = frontptr->next;
        temp->next = NULL;
        delete temp;
        length --;
    }
}

void getfront(){
    if(isEmpty())
        cout<<"empty beaaaaach"<<endl;
    else
        cout<< frontptr->item<<endl;;
}
void getrear(){
    if(isEmpty())
        cout<<"empty beaaaaach"<<endl;
    else
        cout<< rearptr->item<<endl;;
}
void display(){
    if(isEmpty()){
        cout<<"sorry it is empty"<<endl;
    }else{
    cout<<"[ ";
    node*cur = frontptr;
    while(cur!= NULL){
        cout<<cur->item<<" ";
        cur = cur->next;
    }cout<<"] ";
    }
}

};
int main(){
linkedqueue q1;
q1.enqueue(10);
q1.enqueue(20);
q1.enqueue(30);
q1.enqueue(40);
q1.getfront();
q1.getrear();
q1.dequeue();
q1.dequeue();
q1.enqueue(150);
q1.dequeue();
q1.display();
    
    
    
       
    
    
    
    return 0;
}
