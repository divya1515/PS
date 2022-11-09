#include <bits/stdc++.h>
using namespace std;
int main()
{
   float a, b, c;
   float disc;
   cin >> a >> b >> c;
   disc = (b * b) - (4 * a * c);
   if (disc < 0)
   {
      cout << "Imaginary roots\n";
   }
   else if (disc == 0)
   {
      cout << "equal roots\n";
   }
   else
      cout << "real and distinct roots\n";
   float x1, x2;
   float imgx1, imgx2;
   if (disc < 0)
   {

      x1 = (-1 * b) / (2 * a);
      imgx1 = (sqrt(-1 * disc)) / (2 * a);
      x2 = (-1 * b) / (2 * a);
      imgx2 = (sqrt(-1 * disc)) / (2 * a);
      cout << setprecision(2) << x1 << "+" << imgx1 << "i\n";
      cout << x2 << "-" << imgx2 << "i\n";
   }
   else
   {
      x1 = (-1 * b + sqrt(disc)) / (2 * a);
      x2 = (-1 * b - sqrt(disc)) / (2 * a);
      cout << "x1  " << x1 << "x2  " << x2;
   }
}
