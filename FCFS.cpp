#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define loopf(i, x, m) for (ll i = (ll)x; i < (ll)m; i++)
#define pb push_back
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll, ll>>
#define vpcl vector<pair<char, ll>>
#define f first
#define sec second
#define nl "\n"
void solve()
{
  ll n;
  cin>>n;
  vl at(n);
  vl bt(n);
  loopf(i,0,n)
  {
     cin>>at[i];
  }
  loopf(i,0,n)
  {
    cin>>bt[i];
  }
  vl ct(n);
  int currenttime=0;
  vl tat(n),wt(n),rt(n);
  loopf(i,0,n)
  {
    
      cout<<currenttime<<" "<<"p"<<i;
      rt[i]=currenttime-at[i];
      ct[i]=currenttime+bt[i];
      currenttime=ct[i];
      tat[i]=ct[i]-at[i];
      wt[i]=tat[i]-bt[i];
  }
  cout<<currenttime;
  nl;
  int avg_tat=0,avg_wt=0,avg_rt=0;
  loopf(i,0,n)
  {
    avg_tat+=tat[i];
    avg_wt+=wt[i];
    avg_rt+=rt[i];
  }
  avg_rt/=n;
  avg_wt/=n;
  avg_rt/=n;
  loopf(i,0,n)
  {
     cout<<"p"<<i<<" - "<<at[i]<<" "<<bt[i]<<" "<<ct[i]<<" "<<tat[i]<<" "<<wt[i]<<" "<<rt[i];
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
