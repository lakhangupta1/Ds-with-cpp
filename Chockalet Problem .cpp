  class Solution { 
public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
           sort(a.begin(),a.end());
           long long mi-diff=INT_MAX;
           long long diff;
           for(long long  i=0;(m+i-1)<n;i++){
               diff=a[m+i-1]-a[i];
               if(diff<mi-diff){
                   diff=mi-diff;
               }
               
           }
           return diff;
    
    }   
};
