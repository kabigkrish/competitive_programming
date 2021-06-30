#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data =x;
        next=NULL;
    }
};
void printl(Node *head)
{
    Node *current =head;
    while(current!=NULL)
    {
        cout<<(current->data);
        current=current->next;
    }
}
int main()
{
   Node *head=new Node(10);
   head->next=new Node(20);
   head->next->next=new Node(30);
   printl(head);
}