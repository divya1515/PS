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
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<=i;j++)
    {
       swap(nums[i][j],nums[j][i]);
    }
  }
  cout<<"\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n/2;j++)
    {
      swap(nums[i][j],nums[i][n-1-j]);
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cout<<nums[i][j]<<" ";
    }
    cout<<"\n";
  }

}
  
