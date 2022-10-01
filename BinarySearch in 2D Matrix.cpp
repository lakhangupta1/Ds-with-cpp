class Solution{
public:	
    bool match(vector<vector<int>>mat,int row,int col,int X){
         int s=0;
         int e=col-1;
         int mid=s+(e-s)/2;
         while(s<=e){
             if(mat[row][mid]==X)
             return true;
             if(mat[row][mid]>X){
                 e=mid-1;
             }
             else{
                 s=mid+1;
             }
             mid=s+(e-s)/2;
         }
         return false;
    }
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int s=0;
	    int e=N-1;
	    int mid=s+(e-s)/2;
	    while(s<=e){
	        if(mat[mid][0]==X)
	        return 1;
	        if(mat[mid][M-1]==X)
	        return 1;
	        if(mat[mid][0]<X && X<mat[mid][M-1]){
	            if(match(mat,mid,M,X));
	            return 1;
	            return 0;
	            
	        }
	        if(mat[mid][0]>X){
	            e=mid-1;
	        }
	        else if(mat[mid][M-1]<X){
	            s=mid+1;
	        }
	        mid=s+(e-s)/2;
	    }
	    return 0;
	}
};
