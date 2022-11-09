#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   float r;
   float ans, base, area;
   cin >> n >> r; // r is the radius
   int a = 1 + (8 * n);
   int check = sqrt(a);
   if (n != 1 && (check * check) == a)
   {
      cout << "Valid triangle\n";
      ans = (float)(-1 + check) / 2;
      base = (ans - 1) * 2 * r;
      area = (sqrt(3) / 4) * base * base;
      cout << "Area: " << area << "\n";
      float height = area * 2 / base;
      cout << "Height: " << height << endl;
   }
   else
   {
      cout << "Invalid";
   }
}
