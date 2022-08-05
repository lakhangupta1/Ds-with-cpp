#include<iostream>
#include<stdlib.h>
#include<limits.h>
#include<algorithm>
#include<queue>
using namespace std;
struct node {
    struct node *left;
    int  data;
    struct node *right;
};
struct node *root=NULL;
//struct node *ptr=NULL;
struct node * insert(){
    int x;
    cout<<"  insert data ";
    cin>>x;
    struct node *newnode=(struct node *)malloc(sizeof(struct node ));
  if(x==0)
  return NULL;
  newnode->data=x;
  cout<<"if you want to put left of "<<x;
  newnode->left=insert();


   cout<<"if you want to put right of "<<x;
   newnode->right=insert();

   return newnode ;
    

}
void preorder(struct node *ptr){
    if(ptr==NULL)
    return ;
    cout<<" preorder traversal-> "<<ptr->data;
    preorder(ptr->left);
    preorder(ptr->right);
}
int search(int a[],int s,int e,int  k){
    for(int i=s;i<=e;i++){
        if(a[i]==k)
        return i;
    }
}
struct node *create(int pre[],int in[],int s,int e){
    static int index=0;

    if(s>e)
    return NULL;

    struct node *newnode =(struct node *)malloc(sizeof(struct node ));
    int curr=newnode->data=pre[index];
    index=index+1;
    newnode->left=NULL;
    newnode->right=NULL;
    
    if(s==e)
    return newnode; 


    int pos=search(in,s,e,curr);
    newnode->left=create(pre,in,s,pos-1);
    newnode->right=create(pre,in,pos+1,e);

    return newnode;
}
int max(int x,int y,int z){
    return (x>y&&x>z)?x:y>z?y:z;
}
int maxelement(struct node *ptr){
    if(ptr==NULL)
    return INT_MIN;
    return max(maxelement(ptr->left),maxelement(ptr->right),ptr->data);
}
void kth_distance(struct node *ptr,int k){
    if(ptr==NULL)
    return ;
    if(k==0){
        cout<<ptr->data<<" ";
        return ;
    }
    kth_distance(ptr->left,k-1);
    kth_distance(ptr->right,k-1);
}

int othermax(struct node *ptr){
    if(ptr==NULL)
    return INT_MIN;
    int l,r,maxtn;
    maxtn=ptr->data;
    l=othermax(ptr->left);
    r=othermax(ptr->right);
    if(l>maxtn)
    maxtn=l;
    if(r>maxtn)
    maxtn=r;

    return maxtn;
}
void printlevelorder(struct node *root){

    if(root==NULL)
    return ;
    queue<struct node *>q;
    q.push(root);

    while(q.empty()==false){
        struct node *ptr=q.front();
        q.pop();
        if(ptr!=NULL){
            cout<<ptr->data<<" ";
            if(ptr->left!=NULL)
            q.push(ptr->left);
            if(ptr->right!=NULL)
            q.push(ptr->right);
        }
    }

}

int  sumofkthlevel(struct node *root,int k){

    if(root==NULL)
    return  -1;
    queue<struct node *>q;
    q.push(root);
    int level=0;
    int sum=0;

    while(q.empty()==false){
        struct node *ptr=q.front();
        q.pop();
        if(ptr!=NULL){
            cout<<ptr->data<<" ";
            if(ptr->left!=NULL)
            q.push(ptr->left);
            if(ptr->right!=NULL)
            q.push(ptr->right);
        }
        if(level==k){
            sum=sum+ptr->data;
        }
        level++;

    }
    return sum;

}
int countnodes(struct node *ptr){
    if(ptr==NULL)
    return 0;
    return 1+countnodes(ptr->left)+countnodes(ptr->right);
}
int heightofBT(struct node *ptr){
    if(ptr==NULL)
    return 0;
    return 1+max(heightofBT(ptr->left),heightofBT(ptr->right));
}

int maxx(int x,int y,int z){
    return (x>y&&x>z)?x:(y>z)?y:z;
}

int calcDiameter(struct node *ptr){
    if(ptr==NULL)
    return 0;
    int lheight=heightofBT(ptr->left);
    int rheight=heightofBT(ptr->right);
    int tdiaemeter=lheight+rheight+1;
   int leftD=calcDiameter(ptr->left);
   int rightD=calcDiameter(ptr->right);
   return maxx(tdiaemeter,leftD,rightD);



}

void sumreplacement(struct node *ptr){
    if(ptr==NULL)
    return ;
    sumreplacement(ptr->left);
    sumreplacement(ptr->right);
   if(ptr->left!=NULL)
   ptr->data+=ptr->left->data;
   if(ptr->right!=NULL)
   ptr->data+=ptr->right->data;

}
bool balancedBT(struct node *ptr){
    if(ptr==NULL)
    return true;
    if(balancedBT(ptr->left)==false)
    return false;
    if(balancedBT(ptr->right)==false)
    return false ;
    int lheight=heightofBT(ptr->left);
    int Rheight=heightofBT(ptr->right);
    if(abs(lheight-Rheight)<=1)
    return true;
    return false;
}
void Right_view(struct node *ptr){
    if(ptr==NULL)
    return ;
    queue<struct node *>q;
    q.push(ptr);
    while(q.empty()==false){
        int n=q.size();
        for(int i=1;i<=n;i++){
         struct node *curr=q.front();
           q.pop();
            if(i==(n)){

            cout<<curr->data<<" ";
            }
      
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
          }
    }
}
void Left_view(struct node *ptr){
    if(ptr==NULL)
    return ;
    queue<struct node *>q;
    q.push(ptr);
    while(q.empty()==false){
        int n=q.size();
        for(int i=0;i<n;i++){
            struct node *curr=q.front();
            q.pop();
            if(i==0){
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(curr->right);
        }
    }
}
struct node* Lca(struct node *ptr,int n1,int n2){
    if(ptr==NULL)
    return NULL;
    if(ptr->data==n1||ptr->data==n2)
    return ptr;
    struct node *left=Lca(ptr->left,n1,n2);
    struct node *right=Lca(ptr->right,n1,n2);
    if(left!=NULL||right!=NULL)
    return ptr;
    if(left==NULL||right==NULL)
    return NULL;
    if(left!=NULL)
    return Lca(ptr->left,n1,n2);
    return Lca(ptr->right,n1,n2);
}

int finddistnode(struct node *ptr,int k,int dist){
    if(ptr==NULL)
    return -1;
    if(ptr->data==k)
    return dist;
    int left=finddistnode(ptr->left,k,dist+1);
    if(left!=-1)
    return finddistnode(ptr->left,k,dist+1);
    return finddistnode(ptr->right,k,dist+1);
}
int DistBTWnodes(struct node *ptr,int n1,int n2)
{    
    int d1,d2;
    struct node *lca=Lca(ptr,n1,n2);
  int   d=finddistnode(lca,n1,0);
   int  p=finddistnode(lca,n2,0);
    return d+p;
}
int main(){
   int  pre[]={1,2,4,5,3,6,7};
    int  in[]={4,2,5,1,6,3,7};
    struct node *Root=create(pre,in,0,6);
    preorder(Root);
    

 //  root=insert();
 // this is printed preorder !
 //  int x=maxelement(root);   //this is very wrong code 
   // int y=othermax(root);
 //  cout<<x<<endl;
   // cout<<y<<" \n";/
   
  // kth_distance(root,2);
  // printlevelorder(root);
   //  int x=sumofkthlevel(root,2);      this is not work perfectely .....
   ///  cout<<x<<endl;
    
  //  int x=calcDiameter(root);
   // cout<<x;
  // sumreplacement(root);
   //preorder(root); 
    // Left_view(root);
  //
   // int d=DistBTWnodes(root,5,6);
   // cout<<d;

    
     return 0;


}