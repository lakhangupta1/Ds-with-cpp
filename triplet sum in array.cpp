    
int sumExists(int arr[],int i, int n, int sum){
    
    
    //code here
    sort(arr+i,arr+n);
   
    int j=n-1;
    while(i<j){
        if((arr[i]+arr[j])==sum)
        return 1;
       if((arr[i]+arr[j])>sum){
           j--;
       }
       if((arr[i]+arr[j])<sum){
           i++;
       }
        
    }
    return 0;
    
    
    
}
    bool find3Numbers(int A[], int n, int X)
    { 
        int target;
        //Your Code Here
        for(int i=0;i<n;i++){
            target=X-A[i];
            if(sumExists(A,i+1,n,target))
            return true;
            
        }
        return false;
        
    }

};
