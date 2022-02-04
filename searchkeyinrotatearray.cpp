#include<iostream>
using namespace std;
             //int  binarysearch(int a[],int s,int e,int key);
         //int searchkey(int a[],int s,int e,int key);
int getpivot(int arr[],int size)
{
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
        e=mid;
        }
        mid=(e+s)/2;

    }
    return s;
}
int searchkey(int a[],int n,int key){
    int pivot=getpivot(a,n);


    if(a[pivot]<=key && a[n-1]>=key)
        return binarysearch(a,pivot,n-1,key);
    
    else
        return binarysearch(a,0,pivot-1,key);
    

}
int binarysearch(int a[],int s,int e,int key){
    int mid=(s+e)/2;
    while(s<e){
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;

    }
   return -1;
}
int main(){
    int i;
    int arr[]={7,8,9,1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int );
    i=searchkey(arr,size-1,6);
    cout<<i;


}