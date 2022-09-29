int firstoccurance(int a[],int s,int e,int x){
     int mid=s+(e-s)/2;
     int ans=-1;
     while(s<=e){
         if(a[mid]==x){
             ans=mid;
             e=mid-1;
             
         }
         if(a[mid]>x){
             e=mid-1;
         }
         if(a[mid]<x){
             s=mid+1;
         }
         mid=s+(e-s)/2;
     }
     return ans;
}


int lastoccurance(int a[],int s,int e,int x){
     int mid=s+(e-s)/2;
     int ans=-1;
     while(s<=e){
         if(a[mid]==x){
             ans=mid;
             s=mid+1;
             
         }
         if(a[mid]>x){
             e=mid-1;
         }
         if(a[mid]<x){
             s=mid+1;
         }
         mid=s+(e-s)/2;
     }
     return ans;
}


vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>v;
    v.push_back(firstoccurance(arr,0,n-1,x));
    v.push_back(lastoccurance(arr,0,n-1,x));
    return v;
}
