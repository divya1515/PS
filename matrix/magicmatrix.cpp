#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int nums[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cin>>nums[i][j];
    }
  }
  int sr[n]={0},sc[n]={0};
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        sr[i]+=nums[i][j];
        sc[i]+=nums[j][i];
    }
  }
  int sumr=0,sumc=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        if(i==j)
        {
            sumr+=nums[i][j];
        }
        if(i+j==n-1)
        {
           sumc+=nums[i][j];
        }
    }
  }
 int flag=0;
  for(int i=0;i<n;i++)
  {
    if(sr[i]==sc[i] && sumr==sumc)
    {
       flag=1;
    }
  }
  if(flag)
  cout<<"magic matrix";
  else
  cout<<"not a magic matrix";
  

}
