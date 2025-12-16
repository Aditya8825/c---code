//representation of linkedlist

// struct node
// {
//     int a;
//     struct node*next;
// };
//  typedef struct node NODE;
//  NODE *start;

// struct  node
// {
//   int num;
//   struct node*ptr; // pointer to node*/
//   //struct ptr*node; // node to pointer 
//   };
//   typedef struct node NODE;/* TyPe definition making it abstarct darta types */
//   NODE*head;/*POINTER TO NODE OF LINKLIST*/
//   head =New NODE;  // dyanmic memeory allocation 
  

//push front



// #include<iostream>
// using namespace std;

// class Node{///classs

//  public:
//             int data;
//             Node*next;

//             Node(int val){
//                 data=val;
//                 next=NULL;
// }
// };
// class List{
//            Node*head;
//            Node*tail;
// public:
//          List(){
//              head=tail=NULL;
//            }
//  void push_front(int val){
//             Node*newNode=new Node(val);
//         if(head==NULL){
//             head=tail=newNode;     
//         }else{
//             newNode->next=head;
//             head=newNode;
// }}
//  void printLL(){
//             Node*temp=head;
//             while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//            cout <<"null"<<endl;

//     }
// };
  
// int main() {
//     List ll;
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);

//     ll.printLL();

//     return 0;
// }

#include<iostream>
using namespace std;

class Node{
  public:
        int data;
        Node*next;

        Node(int val){
            data=val;
            next=NULL;

        }
}; 
class List{
      Node*head;
      Node*tail;
public:
       List(){
      head=tail=NULL;
       }
       void push_front(int val){
        Node*newNode=new Node(val);
    if(head==NULL){
        head=tail=newNode;
       // head=newNode;
    }else{
        newNode->next=head;
        head=newNode;
    }
}
    void printLL(){
        Node*temp=head;
         while (temp!=NULL)
         {
            cout<<temp->data<<" ";
            temp=temp->next;
         }
         cout<<"null"<<endl;
    }
       
};
 int main(){
    List ll;
    int n,val;
    cout<<"enter number of node:";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"enter  value:";
        cin>>val;
       ll.push_front(val);
    }
     ll. printLL();
  
     return 0;
 }
    
