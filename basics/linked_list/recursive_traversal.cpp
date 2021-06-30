#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }

};
void recursive_traversal(Node *head)
{
    if(head ==NULL) return;
    cout<<(head->data);
    recursive_traversal(head->next);
}
 

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    recursive_traversal(head);
    cout<<"done";
    
}