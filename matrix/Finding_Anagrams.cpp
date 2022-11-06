#include<bits/stdc++.h>
using namespace std;
void finding_anagrams(string s1,string s2)
{
    unordered_map<char,int>m;
    for(int i=0;i<s1.length();i++)
    {
        m[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++)
    {
        m[s2[i]]++;
    }
    for(auto it:m)
    {
        if((it.second)&1)
        cout<<it.first;
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    finding_anagrams(s1,s2);
}
