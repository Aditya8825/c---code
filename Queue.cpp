#include<iostream>
// #include<vector>
// using namespace std;

// class Node{
// public:
// int data;
// Node*next;


// Node(int val){
//     data=val;
//     next=NULL;
// }
// };
// class Queue{
//     Node*head;
//     Node*tail;

// public:

//             Queue(){
//             head=tail=NULL;
// }
//     void push(int data){
//         Node*newNode= new Node(data);
      
//          if(empty()){
//             head=tail=newNode;
//          }else{
//             tail->next= newNode;
//             tail=newNode;
//          }
//     }
//     void pop(){
//         if(empty()){
//             cout<<"LL is emmpty\n";
//             return;
//         }
//         Node* temp =head;
//         head=head->next;
//         delete temp;

//     }

//     int front(){
//          if(empty()){
//             cout<<"LL is emmpty\n";
             
//             return -1;
//         }
//         return head->data;
//     }
//     bool empty(){
//         return head==NULL;

//     }

// };
// int main (){
//     Queue q;
//     q.push(10);
//       q.push(20);
//         q.push(30);

//         while(!q.empty()){
//             cout<<q.front()<<" ";
//             q.pop();
//         }
//         cout<<endl;
//         return 0;


// }



//Queue (using STL)
#include<queue>
// using namespace std;

// int main(){
//     queue<int> q;
//      q.push(1);
//      q.push(2);
//      q.push(3);
//      q.push(4);
//      while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//      }
//    cout<<endl;
//   return 0;
// }



//Deque
#include<deque>
using namespace std;

int main(){
  deque<int>dq;

  dq.push_back(10);
  dq.push_back(20);
  dq.push_back(30);

  dq.push_front(4);
  cout<<dq.front()<<" "<<dq.back()<<endl;
  return 0;
}