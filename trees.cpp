#include<iostream>
#include<vector>

using namespace std;

// class node{
//     public:

//              int data;
//              node*left;
//              node*right;

//              node(int val){
//                 data=val;
//                 left=right=NULL;
//              }
// };
// static int idx =-1;
// node* buildTree(vector<int> preorder){
//     idx++;

//     if(preorder[idx]==-1){
//         return NULL;
//     }
//     node*root =new node(preorder[idx]);
//     root->left=buildTree(preorder);
//     root->right=buildTree(preorder);
//     return root;
// }
// int main(){
//     vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     node*root =buildTree(preorder);
//     cout<<root->data<<endl;
//     return 0;
// }




// preorder
// #include<iostream>
// #include<vector>

// using namespace std;

// class node{
//     public:

//              int data;
//              node*left;
//              node*right;

//              node(int val){
//                 data=val;
//                 left=right=NULL;
//              }
// };
// static int idx =-1;
// node* buildTree(vector<int> preorder){
//     idx++;

//     if(preorder[idx]==-1){
//         return NULL;
//     }
//     node*root =new node(preorder[idx]);
//     root->left=buildTree(preorder);
//     root->right=buildTree(preorder);
//     return root;
// }
// int main(){
//     vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     node*root =buildTree(preorder);
//     cout<<root->data<<endl;
//     return 0;
// }




// preorder
// #include<iostream>
// #include<vector>

// using namespace std;

// class node{
//     public:

//              int data;
//              node*left;
//              node*right;

//              node(int val){
//                 data=val;
//                 left=right=NULL;
//              }
// };
// static int idx =-1;
// node* buildTree(vector<int> preorder){
//     idx++;

//     if(preorder[idx]==-1){
//         return NULL;
//     }
//     node*root =new node(preorder[idx]);
//     root->left=buildTree(preorder);
//     root->right=buildTree(preorder);
//     return root;
// }
// int main(){
//     vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     node*root =buildTree(preorder);
//     cout<<root->data<<endl;
//     return 0;
// }




// preorder<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

// #include<iostream>
// #include<vector>

// using namespace std;

// class node{
//     public:

//              int data;
//              node*left;
//              node*right;

//              node(int val){
//                 data=val;
//                 left=right=NULL;
//              }
// };
// static int idx =-1;
// node* buildTree(vector<int> preorder){
//     idx++;

//     if(preorder[idx]==-1){
//         return NULL;
//     }
//     node*root =new node(preorder[idx]);
//     root->left=buildTree(preorder);
//     root->right=buildTree(preorder);
//     return root;

// }

// //preorder
// void preOrder(node*root){
//     if(root ==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }
// int main(){
//     vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     node*root =buildTree(preorder);

//     preOrder(root);
//     cout<<root->data<<endl;
//     return 0;
// }


//inorder tranverse<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// #include<iostream>
// #include<vector>

// using namespace std;

// class node{
//     public:

//              int data;
//              node*left;
//              node*right;

//              node(int val){
//                 data=val;
//                 left=right=NULL;
//              }
// };
// static int idx =-1;
// node* buildTree(vector<int> preorder){
//     idx++;

//     if(preorder[idx]==-1){
//         return NULL;
//     }
//     node*root =new node(preorder[idx]);
//     root->left=buildTree(preorder);
//     root->right=buildTree(preorder);
//     return root;

// }

// //preorder
// void preOrder(node*root){
//     if(root ==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }
// void inorder(node*root){
//     if(root==NULL){
//          return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int main(){
//     vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     node*root =buildTree(preorder);

//     inorder(root);
//     cout<<endl;
//     return 0;
// }



//post <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<





//--again---/////
// class node{
//     public:
//     int data;
//     node*left;
//     node*right;

//     node(int val){
//         data=val;
//         left=right=NULL;
//     }
   
// }
//     static int idx =-1;
// node* buildTree(vector<int> preorder){
//     idx++;

//     if(preorder[idx]==-1){
//         return NULL;
//     }
//     node*root =new node(preorder[idx]);
//     root->left=buildTree(preorder);
//     root->right=buildTree(preorder);
//     return root;
//      int height (node*root){
//         if(root==NULL){
//             return 0;
//         }
//         int leftHT=height(root->left);
//         int rightHT=height(root->right);
//         return max(leftHT,rightHT)+1;
//     }

// };

// int main(){
//     vector<int>preorder={1,2,-1,-1,3,4,1,5,-1};
//     node*root=buildTree(preorder);
//     cout<<"height:"<<height(root)<<endl;
//     return 0;
// }
















