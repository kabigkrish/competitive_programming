#include<bits/stdc++.h>
using namespace std;

bool subseq(string &str1,string &str2,int str1len,int str2len)
{
    int i=0,j=0;
    if(str2len>str1len) return false;
    for(int i=0;i<str1len &&j<str2len;i++)
    {
        if(str1[i]==str2[j]) j++;
    }
    return(j==str2len );
}
int main()
{
    string str1="aa";
    string str2="aa";
    int str1len=str1.size();
    int str2len=str2.size();
    cout<<subseq(str1,str2,str1len,str2len);
}