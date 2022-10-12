#include<bits/stdc++.h>
using namespace std;
void validvariable(string s)
{
    int i=0;
    int flag=1;
    if(s[i]=='_'||s[i]=='$'||s[i]>='a'&& s[i]<='z'||s[i]>='A'&& s[i]<='Z')
    {
        while(s[i]!='\0')
        {
            if(s[i]=='_'||s[i]=='$'||s[i]>='a'&& s[i]<='z'||s[i]>='A'&& s[i]<='Z'||s[i]>='0'&&s[i]<='9')
            i++;
            else
            {
                flag=0;
                break;
            }
        }
   }
   else
   {
    flag=0;
   }
   if(flag)
   cout<<"Valid"<<"\n";
   else
   cout<<"Invalid";
}
int main()
{
    string s;
    cin>>s;
    validvariable(s);
}
