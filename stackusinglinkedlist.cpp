#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *link;
};
struct node *top=NULL;
void push(int key){
    struct node*newnode=(struct node *)malloc(sizeof(struct node ));
    newnode->data=key;
    newnode->link=top;
    top=newnode;
}
void display(struct node *top){
    if(top==NULL){
        cout<<"linked list is empty";
        return ;
    }
    else{
        while(top!=NULL){
            cout<<top->data<<endl;
            top=top->link;
        }
    }
}
int main(){
    int i,n;
    cout<<"Enter the number for how many size of stack ";
    cin>>n;
    int key;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the data";
        cin>>key;
        push(key);

    }
    display(top);


}