#include<bits/stdc++.h>
using namespace std;
void freqcnt(string s1)
{
    int idx[26]={0};
    for(int i=0;i<s1.length();i++)
    {
       idx[s1[i]-'a']++;
    }
   for(int i=0;i<26;i++)
   {
       if(idx[i]!=0)
       {
        char x=i+'a';
        cout<<x<<" "<<idx[i]<<endl;
       }
   }
    
}
int main()
{
    string s;
    cin>>s;
    freqcnt(s);
}
