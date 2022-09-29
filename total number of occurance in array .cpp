class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
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
	int count(int arr[], int n, int x) {
	    // code here
	    
	   
	    if(lastoccurance(arr,0,n-1,x)==-1 &&  firstoccurance(arr,0,n-1,x)==-1){
	        return 0;
	    }
	     if(firstoccurance(arr,0,n-1,x)==-1){
	        return 1;
	    }
	     if(lastoccurance(arr,0,n-1,x)==-1){
	        return 1;
	    }
	    return lastoccurance(arr,0,n-1,x)-firstoccurance(arr,0,n-1,x)+1;
	   
	   
	   
	}
};
