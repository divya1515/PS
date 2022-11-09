#include <bits/stdc++.h>
using namespace std;
int main()
{
   int num;
   cin >> num;
   string s;
   s = to_string(num);
   int n = s.length();
   int s1 = 0;
   for (int i = 0; i < n / 2; i++)
   {
      s1 += s[i] - '0';
   }
   for (int i = (n / 2) + 1; i < n; i++)
   {
      s1 -= s[i] - '0';
   }
   if (s1 == 0)
   {
      cout << "Balanced";
   }
   else
      cout << "unbalanced";
}
