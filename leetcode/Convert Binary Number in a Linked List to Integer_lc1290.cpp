/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val=x;
        next=NULL;

    }
};
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>b;
        while(head!=NULL)
        {
            b.push_back(head->val);
            head=head->next;
            }
        int sum=0;
        for(int i=b.size()-1;i>=0;i--)
        {
            sum+=pow(2,i)*b[i];
            cout<<"for loop"<<b[i]<<endl;
        }
    return sum;
    }
};

int main()
{
    Solution obj;
    ListNode *head=new ListNode(1);
    head->next=new ListNode(0);
    head->next->next=new ListNode(1);
    cout<<obj.getDecimalValue(head);
}

/*

class Solution {
public:
    int out=0;//output varibale
    int i=0; //indexing for pow function
    
    void traverse(struct ListNode *p) // tarversing values in reverse order
    {
        if(p==0)
            return;  
        traverse(p->next);
        out+=p->val*pow(2,i++);     // binary to decimal conversion
    }
    
    int getDecimalValue(ListNode* head) {
        
        traverse(head);
        return out;
        
    }
};
*/