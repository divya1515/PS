#include<bits/stdc++.h>
using namespace std;
void suffix(string s1)
{
    int l=s1.length();
    for(int i=l-1;i>=0;i--)
    {
        for(int j=i;j<=l-1;j++)
        {
            cout<<s1[j];
        }
        cout<<endl;
    }
}
int main()
{
    string s;
    cin>>s;
    suffix(s);
}
