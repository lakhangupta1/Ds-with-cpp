#include<iostream>
using namespace std;
pair<int ,int >p;
bool pairsum(int a[],int s,int n,int t);
int tripletsum(int a[],int n,int t);
int main(){
    
    int a[]={1,3,5,7,11,12,14,18,19};
    int n=sizeof(a)/sizeof(int );

    int t=tripletsum(a,n,9);
      if(t==-1)
      cout<<"there is no triplet sum"<<endl;
      else {
          cout<<"this is 3 nomber "<<endl;
          cout<<t<<" "<<p.first<<" "<<p.second<<" "<<endl;
      }




    return 0;

    
}
int tripletsum(int a[],int n,int t){


    for(int i=0;i<n;i++){
        int tp=t-a[i];
      if(pairsum(a,i+1,n,t))
        return tp;
    }
    return -1;  


}
bool pairsum(int a[],int s,int n,int t){
      
      int i=s;
      int j=n-1;
      while(i<j){
          if((a[i]+a[j])==t)
          {
              p.first=a[i];
              p.second=a[j];
              return true ;
          }
          else if((a[i]+a[j])>t)
          j--;
          else if((a[i]+a[j])<t)
          i++;



      }
      return false ;




}