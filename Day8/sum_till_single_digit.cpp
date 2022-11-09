#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   string s = to_string(n);
   int sum = 0;
   while (s.length() > 1)
   {
      sum = 0;
      for (int i = 0; i < s.length(); i++)
         sum += s[i] - '0';
      s = to_string(sum);
   }

   cout << sum;
}
