int connectingTowns(int n, vector<int> routes) {
    int m=1;
    for(int i=0;i<n-1;i++)
    {
       
        m=(m*routes[i])%1234567;
       
        
    }
    return m;
}
