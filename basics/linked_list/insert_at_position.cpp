#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void printn(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}
Node insert(Node *head,int data,int pos)
{
    Node *temp=new Node(data);
    if(head==NULL)
    {
    temp->next=head; 
    return *temp;
    }
    for(int i=0;i<pos-2;i++ &&head!=NULL)
    {
        head=head->next;
    }
    if(head==NULL) return *head;
    temp->next=head->next;
    head->next=temp;
    return *head;
}
int main()
{
    Node *head=new Node(50);
    head->next=new Node(12);
    head->next->next=new Node(99);
    printn(head);
    cout<<endl;
    insert(head,777,2);
    cout<<endl;
    printn(head);

}