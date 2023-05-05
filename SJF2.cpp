//when arrival time is not 0
#include <bits/stdc++.h>
using namespace std;
#define  sec second
#define f first
void solve()
{
  int n;
  cin>>n;
  vector<int> at(n);
  vector<int> bt(n);
  vector<pair<int,pair<int,int>>>vp;
   for(int i=0;i<n;i++)
  {
     cin>>at[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>bt[i];
    vp.push_back({at[i],{bt[i],i}});
  }
  sort(vp.begin(),vp.end());//to sort according to arrival time
  priority_queue<pair<int,pair<int,int>>>pq;//priority queue to access acc to burst time
  vector<int> ct(n);
  int currenttime=vp[0].sec.f+vp[0].f;
  vector<int> tat(n),wt(n),rt(n);
  cout<<vp[0].f<<" "<<"p"<<vp[0].sec.sec+1<<" "<<currenttime<<" ";
  int id=vp[0].sec.sec;
  ct[id]=currenttime;
  tat[id]=ct[id]-at[id];
  wt[id]=tat[id]-(vp[0].sec.f);
   for(int i=1;i<vp.size();i++)
  {
     while(i<vp.size() && vp[i].f<=currenttime)//now to calculate for all those proccesses whose arrival time is less than currenttime and then accessing those procces according to burst time
     {
       pq.push({(-1*vp[i].sec.f),{vp[i].f,vp[i].sec.sec}});
       i++;
     }
     pair<int,pair<int,int>>p=pq.top();
     pq.pop();
     id=p.sec.sec;
     currenttime+=(-1*p.f);
     ct[id]=currenttime;
     tat[id]=ct[id]-p.sec.f;
     wt[id]=tat[id]-(-1*p.f);
     cout<<"p"<<p.sec.sec+1<<" "<<currenttime<<" ";
     i--;
  }
  while(!pq.empty())
  {
       pair<int,pair<int,int>>p=pq.top();
     pq.pop();
     id=p.sec.sec;
     currenttime+=(-1*p.f);
     ct[id]=currenttime;
     tat[id]=ct[id]-p.sec.f;
     wt[id]=tat[id]-(-1*p.f);
     cout<<"p"<<p.sec.sec+1<<" "<<currenttime<<" ";
  }
  cout<<endl<<endl<<"TABLE"<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<"p"<<i+1<<" "<<at[i]<<" "<<bt[i]<<" "<<ct[i]<<" "<<tat[i]<<" "<<wt[i]<<endl;
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
