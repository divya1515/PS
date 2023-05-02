//when arrival time is all 0 then according to burst time we will do the question
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
void solve()
{
  ll n;
  cin>>n;
  vl at(n);
  vl bt(n);
  vpl v;
  loopf(i,0,n)
  {
     cin>>at[i];
  }
  loopf(i,0,n)
  {
    cin>>bt[i];
    v.pb({bt[i],i});
  }
  sort(v.begin(),v.end());
  vl ct(n);
  int currenttime=0;
  vl tat(n),wt(n),rt(n);
  loopf(i,0,n)
  {
     cout<<currenttime<<" "<<"p"<<v[i].second<<" ";
      rt[i]=currenttime-at[i];
      ct[i]=currenttime+v[i].first;
      currenttime=ct[i];
      tat[i]=ct[i]-at[i];
      wt[i]=tat[i]-v[i].first;
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
     cout<<"p"<<v[i].second<<" - "<<at[i]<<" "<<v[i].first<<" "<<ct[i]<<" "<<tat[i]<<" "<<wt[i]<<" "<<rt[i];
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
