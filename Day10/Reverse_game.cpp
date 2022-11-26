int solve(int n,int k)
{
    
    if(k>=(n/2))
    {
        return (2*(n-(k+1)));
    }
    else 
    {
        return (1+2*k);
    }
}


int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a=solve(n,k);
        cout<<a<<"\n";
    }
    
    return 0;
}
