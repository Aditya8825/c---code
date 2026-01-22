#include<iostream>
using namespace std;

//definition of a binary tree node
struct node{
    int data;
    node*left;
    node*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};
//--function to calculate height of binar tree
int height (node*root){
    if(root==NULL)
    return 0;

    int leftHeight=height(root->left);
    int rightHeight=height(root->right);

    return max(leftHeight,rightHeight)+1;
}
int main(){
    //creation a sample binary tree
    /*
          1
        /   \
      2       3
    / \
    4  5
    
    */
         node*root=new node(1);
         root->left=new node(2);
         root->right=new node(3);
         root->left->left=new node(4);
         root->left->right=new node(5);

         cout<<"height of the binary tree:"<<height(root)<<endl;
         return 0;
}