#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2)
{
    int characters[256]={0};
    if(s1.size()!=s2.size()) return false;
    for(int i=0;i<s1.size();i++)
    {
        characters[s1[i]]++;
        characters[s2[i]]--;
    }
    for(int i=0;i<256;i++) 
        if(characters[i]!=0) return false;
    return true;
}
int main()
{
string s1="listen";
string s2="silent";
cout<<anagram(s1,s2);
}
