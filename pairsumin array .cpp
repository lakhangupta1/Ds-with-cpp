
int sumExists(int arr[], int n, int sum){
    
    
    //code here
    sort(arr,arr+n);
    int i=0;
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
