#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
    int data;
    struct node *left ;
    struct node *right;

};
struct node *create(){
    int x;
    cout<<"Enter the data"<<endl;
    cin>>x;
    if(x==-1){
        return NULL;

    }
    else{
        struct node * newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=x;
        cout<<"Enter the left data of "<<x<<"  and -1 for return NULL"<<endl;
        newnode->left=create();
        cout<<"Enter the right data of "<<x<<"  ant -1 for return NULL"<<endl;
        newnode->right=create();
    }

}
void postorder(struct node *ptr){
    if(ptr!=NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<endl;
    }
}
void inorder(struct node *ptr){
    if(ptr!=NULL){
        inorder(ptr->left);
        cout<<ptr->data<<endl;
        inorder(ptr->right);

    }
}
void preorder(struct node *ptr){
    if(ptr!=NULL){
        cout<<ptr->data<<endl;
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
int main(){ 
    struct node *root=create();
    cout<<"----------------------This is preorder traversall---------------------------"<<endl;
    preorder(root);
    cout<<"----------------------This is postorder traversall---------------------------"<<endl;
    postorder(root);
    cout<<"----------------------This is inorder traversall---------------------------"<<endl;
    inorder(root);
    


}