int restaurant(int l, int b) {
  int mn;
  mn=min(l,b);
  int ans=1;
  for(int i=mn;i>=1;i--)
  {
      if((l%i)==0 && (b%i)==0)
      {
          ans=(l/i)*(b/i);
          break;
      }
  }
  return ans;
}
