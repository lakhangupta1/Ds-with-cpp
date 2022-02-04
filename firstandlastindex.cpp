#include<iostream>
using namespace std;
int firstoccu(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(a[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;

    } 
    return ans;
}
int lastocc(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(a[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        } 
         mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int i,j;
    int arr[]={1,2,3,3,3,3,3,3,3,3,3,3,5,6,7,8,9};
    int size =sizeof(arr)/sizeof(int );
    i=firstoccu(arr,size,5);
    j=lastocc(arr,size,5);
    cout<<"The first index is "<<i<<"And second index is "<<j<<endl;

}