class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int ans=INT_MIN;
        int vector<int>v;
        for(int i=n-1;i>=0;i--){
            if(ans<a[i]){
                v.push_front(a[i]);
                ans=a[i];
                
            }
            
        }
        return v;
    }
};
