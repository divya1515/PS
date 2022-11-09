#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,k;
   cin>>a>>b>>k;
   long long int num;
   num=pow(a,b);
   string s=to_string(num);
   int n=s.length();
   cout<<s[n-k];
}
