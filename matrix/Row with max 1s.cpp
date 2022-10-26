// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans=-1,mx=-1;
	    int j=m-1;
	    int i=0;
	    
	    for(i=0;i<n;i++)
	    {
	        while(j>=0&&arr[i][j]==1)
	        {
	            j--;
	        }
	        if(mx<m-j-1)
	        {
	             mx=max(m-j-1,mx);
	             ans=i;
	        }
	    }

	        if(ans==0)
	        {
	            for(int i=0;i<m;i++)
	            {
	                if(arr[0][i]==1)
	                    return 0;
	            }
	            return -1;
	        }
	    return ans;
	    
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

bool searchMatrix(vector<vector<int>>& mat, int target) {
        int j=mat[0].size()-1;
        int i=0;
        while(j>=0&&i<mat.size())
        {
            if(mat[i][j]==target)
                return true;
            else if(mat[i][j]<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
  // } Driver Code Ends
