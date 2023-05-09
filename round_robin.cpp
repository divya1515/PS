#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define loopf(i, x, m) for (ll i = (ll)x; i < (ll)m; i++)
#define vl vector<ll>
#define nl cout<<endll;
#define vpl vector<pair<ll, ll>>
#define vpcl vector<pair<char, ll>>
void solve()
{
   ll n,tq;
   cin>>n>>tq;
   vl at(n),bt(n),rembt(n);
   loopf(i,0,n)
   {
     cin>>at[i];
   }
   loopf(i,0,n)
   {
       cin>>bt[i];
       rembt[i]=bt[i];
   }
   queue<ll>pq;
   loopf(i,0,n)
   { 
    if(at[i]==0)
     pq.push(i);
   }
   ll currenttime=0;
   vl ct(n);
   vl rt(n),tat(n),wt(n);
   ll i=1;
  while(!pq.empty())
  {
     ll x=pq.front();
     pq.pop();
     x=x*-1;
     if(rembt[x]==bt[x])
     {
       rt[x]=currenttime;
     }
     if(rembt[x]>tq)
     {
        currenttime+=tq;
        while(i<n)
        {
           if(at[i]<=currenttime)
           {
            pq.push(i);
            i++;
           }
           else
           break;
        }
        pq.push(x);
        rembt[x]-=tq;
     }
     else
     {
        currenttime+=rembt[x];
        ct[x]=currenttime;
        rembt[x]=0;
         tat[x]=ct[x]-at[x];
         wt[x]=tat[x]-bt[x];
         while(i<n)
         {
           if(at[i]<=currenttime)
           {
             pq.push(i);
             i++;
           }
           else
           break;
         }
     }

  }
   loopf(i,0,n)
   {
     cout<<"p"<<i<<" "<<at[i]<<" "<<bt[i]<<" "<<ct[i]<<" "<<tat[i]<<" "<<wt[i]<<" "<<rt[i];
     nl;
   }
}

int32_t main()
{
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t = 1;
  while (t--)
  {
    solve();
  }
}
