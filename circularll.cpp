#include<iostream>
 using namespace std;



 //insert at head,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
 class node{
    public:
              
              int data;
              node*next;

              node(int val){
                data=val;
                next=NULL;
              }
 };
 class circularlist{
    node*head;
    node*tail;

public:
      circularlist(){
        head=tail=NULL;
      }
      void insertAtHead(int val){
        node*newnode=new node(val);

        if(tail==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            newnode->next=head;
            head=newnode;
             tail->next=head;
        }
      }
      void print(){
        if(head==NULL) return;

        cout<<head->data<<"->";
        node*temp=head->next;

        while (temp !=head)
        {
           cout<<temp->data<<"->";
           temp=temp->next;
        }
         cout<<temp->data<<endl;
      }

 };
 int main(){
    circularlist cll;
    cll.insertAtHead(10);
    cll.insertAtHead(20);
    cll.insertAtHead(30);
    cll.insertAtHead(40);
    cll.print();
 }

 //insert at tail,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

 class node{
    public:
              
              int data;
              node*next;

              node(int val){
                data=val;
                next=NULL;
              }
 };
 class circularlist{
    node*head;
    node*tail;

public:
      circularlist(){
        head=tail=NULL;
      }
      void insertAtHead(int val){
        node*newnode=new node(val);

        if(tail==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            newnode->next=head;
            head=newnode;
             tail->next=head;
        }
      }
      void print(){
        if(head==NULL) return;

        cout<<head->data<<"->";
        node*temp=head->next;

        while (temp !=head)
        {
           cout<<temp->data<<"->";
           temp=temp->next;
        }
         cout<<temp->data<<endl;
      }
      void insertAtTail(int val){
        node*newnode=new node(val);

        if(tail==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            newnode->next=head;
            tail->next=newnode;
            tail=newnode;
        }
      }

 };
 int main(){
    circularlist cll;
    cll.insertAtHead(20);
    cll.insertAtHead(10);

    cll.insertAtTail(40);
    cll.insertAtTail(30);

    cll.print();
 }
 //delete at head<<<<<<<<<<<<<<<<<<<<<<<<<<<,
 class node{
    public:
              
              int data;
              node*next;

              node(int val){
                data=val;
                next=NULL;
              }
 };
 class circularlist{
    node*head;
    node*tail;

public:
      circularlist(){
        head=tail=NULL;
      }
      void insertAtHead(int val){
        node*newnode=new node(val);

        if(tail==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            newnode->next=head;
            head=newnode;
             tail->next=head;
        }
      }
      void print(){
        if(head==NULL) return;

        cout<<head->data<<"->";
        node*temp=head->next;

        while (temp !=head)
        {
           cout<<temp->data<<"->";
           temp=temp->next;
        }
         cout<<temp->data<<endl;
      }
      void insertAtTail(int val){
        node*newnode=new node(val);

        if(tail==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            newnode->next=head;
            tail->next=newnode;
            tail=newnode;
        }
      }
      void deleteAtHead(int val){
        if(head==NULL) return;

        else if(head==tail){
            delete head;
            head=tail=NULL;
        }else {
            node*temp=head;
            head=head->next;
            tail->next=head;

            temp->next=NULL;
            delete temp;
        }
      }
      void deleteAtTail(int val){
        if(head==NULL) return;

        else if(head==tail){
            delete head;
            head=tail=NULL;
        }else {
            node*temp=head;
            head=head->next;
            tail->next=head;

            temp->next=NULL;
            delete temp;
        }
      }

 };
 int main(){
    circularlist cll;
   cll.insertAtHead(20);
   cll.insertAtHead(10);

    cll.insertAtTail(40);
    cll.insertAtTail(30);

  cll.deleteAtHead();

    cll.print();
    return 0;
 }