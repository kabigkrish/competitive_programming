// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        return lower_bound(Arr.begin(), Arr.end(), k) - Arr.begin();
    } 
};

// { Driver Code Starts.
int main()
{ 
		vector<int>Arr={1,2,3,4,6,7,8,80};
		int N=Arr.size();
        int k=5;
        Solution obj;
        //cout<<obj.searchInsertK(Arr, N, k)<<endl;
		obj.binary_search(Arr,0,N,k);    
    return 0;
}  // } Driver Code Ends
