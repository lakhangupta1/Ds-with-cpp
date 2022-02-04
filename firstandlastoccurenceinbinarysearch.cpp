#include<iostream>
using namespace std;
int firstoccu(int arr[],int size ,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;



}
int lastoccu(int arr[],int size ,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;

        }
       else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;



}
int main(){
    int even[]={1,2,3,4,4,4,4,4,4,5,6,7,8};
    int size=sizeof(even)/sizeof(int );
    int key;
    cout<<"Enter the key ";
    cin>>key;
    int totalno;
    pair<int ,int >p;
    p.first=firstoccu(even,size,key);
    p.second=lastoccu(even,size,key);
    totalno=(p.second-p.first)+1;
    cout<<"first occurencd is "<<p.first<<" \nlast ocuurence is "<<p.second;
    cout<<"\nTotal nomber of occurence "<<totalno;

}