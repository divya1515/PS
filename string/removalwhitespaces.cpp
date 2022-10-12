#include<bits/stdc++.h>
using namespace std;
void removewhitespaces(string s)
{
   string ans="";
   int i=0,j=s.length();
 while(s[i]==' ')
   { 
    i++;
   }
   while(s[j-1]==' ')
   {
    j--;
   }
   while(i<j)
   {
    ans+=s[i];
    i++;
   }
   cout<<s.length()<<"\n";
   cout<<ans.length();
   cout<<ans<<"\n";

}
int main()
{
    string s;
    getline(cin,s);
    removewhitespaces(s);
}
