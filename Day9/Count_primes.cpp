class Solution {
public:
    int countPrimes(int n) {
        vector<int>idx(n+1);
        for(int i=2;i<=sqrt(n);i++)
        {
            if(idx[i]==0)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    idx[j]=1;
                }
            }
        }
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(idx[i]==0)
            {
                ans++;
            }
        }
        return ans;
    }
};
