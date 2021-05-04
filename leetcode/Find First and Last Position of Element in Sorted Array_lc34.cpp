#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstocc(vector<int>&nums,int target,int low,int high)
    {
        if(low>high) return -1; 
        int mid=(low+high)/2;
        if(nums[mid]>target)
            return firstocc(nums,target,low,mid-1);
        else if(nums[mid]<target)
            return firstocc(nums,target,mid+1,high);
        else 
            if(mid==0||nums[mid-1]!=nums[mid])
            return mid;
            else 
                return firstocc(nums,target,low,mid-1);
    }
    
    int lastocc(vector<int>&nums,int target,int low,int high)
    { 
       if(low>high) return -1; 
        int mid=(low+high)/2;
        if(nums[mid]>target)
            return lastocc(nums,target,low,mid-1);
        else if(nums[mid]<target)
            return lastocc(nums,target,mid+1,high);
        else 
            if(mid==0||nums[mid+1]!=nums[mid])
            return mid;
            else 
            return lastocc(nums,target,mid+1,high);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int first=firstocc(nums, target,low,high);
        int loww=0;
        int highh=nums.size()-1;
        int last=lastocc(nums,target,loww,highh);
        vector<int>out;
        out.push_back(first);
        out.push_back(last);
        return out;   
    }
};
int main()
{
    Solution s;
    vector<int>output;
    vector<int >nums={20,20};
    int target=20;
    output=s.searchRange(nums,target);
    for(auto i:output)
    cout<<i<<endl;
} 