#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int nums[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> nums[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n / 2; j++)
    {
      swap(nums[i][j], nums[i][n - j - 1]);
    }
  }
  for (int j = 0; j < n; j++)
  {
    for (int i = 0; i < n / 2; i++)
    {
      swap(nums[i][j], nums[n - i - 1][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << nums[i][j] << " ";
    }
    cout << "\n";
  }
}
