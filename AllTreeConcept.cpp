#include<iostream>
#include<queue>
using namespace std;
class Node {
    public :
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
Node* buildtree(){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    if(data==0)
    return NULL;
    Node* newnode=new Node(data);
    cout<<"Enter the left of "<<data<<endl;
    newnode->left=buildtree();
    cout<<"Enter the right of "<<data<<endl;
    newnode->right=buildtree();
    return newnode;
}
void preorder(Node *ptr){
    if(ptr==NULL)
    return ;
    cout<<ptr->data<<" ";
    preorder(ptr->left);
    preorder(ptr->right);

}
void levelwise(Node *&ptr){
   
    queue<Node*>q;
    q.push(ptr);
    q.push(NULL);
    while(!q.empty()){
        Node *front=q.front();
        q.pop();
        if(front=NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else
        {
        cout<<front->data<<" ";
        if(front->left!=NULL)
        q.push(front->left);
        if(front->right!=NULL)
        q.push(front->right);

        }
    }
}
int max(int x,int y){
    return x>y?x:y;
}
int heightoftree(Node *ptr){
    if(ptr==NULL){
        return 0;
    }
   
    return  ( max(heightoftree(ptr->left),heightoftree(ptr->right))+1);
}
int diameter(Node *ptr){
    if(ptr==NULL){
        return 0;

    }
    int option1=diameter(ptr->left);
    int option2=diameter(ptr->right);
    int option3=heightoftree(ptr->left)+heightoftree(ptr->right)+1;
    return max(max(option1,option2),option3);

}
bool pathsum(Node *ptr,int target){
    if(ptr==NULL)
    return false;

    //find leaf node ..
    if(ptr->left==NULL&&ptr->right==NULL&& ptr->data==target)
    return true;

    //find new target .
    target=target-ptr->data;
    bool lefttarget=pathsum(ptr->left,target);
    bool righttarget=pathsum(ptr->right,target);
    return (lefttarget||righttarget);
}
bool solve(Node *a,Node *b){
    if(a==NULL &&b==NULL)
    return true;

    if(a!=NULL && b==NULL)
    return false;

    if(a==NULL&& b!=NULL)
    return false;

    if(a->data == b->data)
    return true;

    if(a->data != b->data)
    return false;

    return solve(a->left,b->right)&&solve(a->right,b->left);

}
bool symettrictree(Node *ptr){
    if(ptr==NULL)
    return true;
    return solve(ptr->left,ptr->right);
}
int search(int in[],int x,int s,int e){
    for(int i=s;i<=e;i++){
        if(in[i]==x)
        return i;
    }
}
Node * constructnode(int pre[],int in[],int s,int e){
    if(s>e)
    return NULL;
     
    static int i=0;
    int x=pre[i++];
    Node* newnode=new Node(x);
    int index=search(in,x,s,e);
    newnode->left=constructnode(pre,in,s,index-1);
    newnode->right=constructnode(pre,in,index+1,e);
    return newnode;
}
Node *constructtree(int post[],int in[], int s, int e){
           if(s>e)
           return NULL;

           static int i=e;
           int x=post[i--];
           Node * newnode=new Node(x);
           int index=search(in,x,s,e);
           newnode->right=constructtree(post,in,index+1,e);
           newnode->left=constructtree(post,in,s,index-1);

           return newnode;

}
int main(){ 
   
   Node *root=NULL;
  // root=buildtree();
   int post[]={8,4,5,2,6,7,3,1};
   int in[]={4,8,2,5,1,6,3,7};
   int n=8;
   // levelwise(root);
 //  preorder(root);
 
 //cout<<" height of tree is ->"<< heightoftree(root)<<endl;
 //cout<<"maximum diameter is ->"<<diameter(root)<<endl;
   //cout<<endl;

   //find path sum ;
     /*  int target=10;
       bool gettarget=pathsum(root,target);
       if(gettarget)
       cout<<"target is getting"<<endl;
       else
       cout<<"target is not getting "<<endl;    */


       //print given tree is symmtriic tree or not .
       /* int issymetric=symettrictree(root);
        if(issymetric)
        cout<<"given tree is symetric"<<endl;
        else
        cout<<"given treee is not symetric "<<endl;*/
        root=constructtree(post,in,0,n-1);
        cout<<endl;
        preorder(root);
        
    
    return 0;

    
}
