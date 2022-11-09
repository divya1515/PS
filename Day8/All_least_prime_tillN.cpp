#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   cout<<"1 ";
   for(int i=2;i<=n;i++)
   {
      if(i&1==0)
      {
         cout<<"2"<<" ";
      }
      else
      {
      for(int j=2;j<=(i);j++)
      {
         if(i%j==0)
         {
            cout<<j<<" ";
            break;
         }
      }
      }
   }
}
