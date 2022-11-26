class Solution {
public:
 vector<int> selfDividingNumbers(int l,int r)
{
  vector<int>v;
  int n,rem,c;
  for(int i=l;i<=r;i++)
  {
        n=i;
        c=0;
        while(n>0)
        {
          rem=n%10;
          if(rem==0 || (i%rem)!=0)
          {
            c=1;
            break;
          }
          n=n/10;
        }
        if(c==0)
        {
        v.push_back(i);
        }
      
  }
     return v;
 }
 };
