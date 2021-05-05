/*	4. Median of Two Sorted Arrays
Hard

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

Example 3:

Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000

Example 4:

Input: nums1 = [], nums2 = [1]
Output: 1.00000

Example 5:

Input: nums1 = [2], nums2 = []
Output: 2.00000


using functions: 

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        vector<int> merged(n);
        merge(nums1.begin(),nums1.end(), nums2.begin(),nums2.end(), merged.begin());
        double median;
        if(n%2!=0){
            median = merged[(n)/2];
        }
        else{
             median = (merged[n/2] + merged[n/2 - 1])/2.00;
        }
        return median; 
    }
};

*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int i=0,j=0;
        int m=a.size();
        int n=b.size();
        vector<int>out;
        while(i<m&&j<n)
        {
            if(a[i]<=b[j])
            {
                out.push_back(a[i]);
                i++;
            }
            else
			{ 	
                out.push_back(b[j]);
				j++;
			}
		}
        while(i<m)
        {
            out.push_back(a[i]);
            i++;	
        }
        while(j<n)
        {
            out.push_back(b[j]);
            j++;
        } 
        if(out.size()%2==0)
		{	
            return  (double)((out[(out.size()-1)/2])+out[out.size()/2])/2;
		}
        else
            return (double)out[(out.size()-1)/2];
            
    }
};
int main()
{
    vector<int>a={1,2};
    vector<int>b={3,4};
    Solution s;
    double outp =s.findMedianSortedArrays(a,b);
    cout<<outp;   
}
