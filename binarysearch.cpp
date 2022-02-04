#include<iostream>
using namespace std;
int binary(int a[],int size,int key){
    int i,start,end;
    start=0;
    end=size-1;
    int mid=start+((end-start)/2);            //this is for big value but we can write mid=start + end ;
    while(start<=end){
        if(a[mid]==key){
            return mid;

        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);        //this is for big value but we can write mid=start + end ;
      
    }
    return -1;
}
int main(){
    int i;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int );
    i=binary(arr,size,10);
    if(i==-1){
        cout<<"data is not present "<<endl;
    }
    else{
        cout<<"data is present at index "<<i<<endl;
    }

}