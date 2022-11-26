int main()
{
    string str;
    cin>>str;
    int sum1=0;
    for(int i=0;i<str.length();i++)
    {
        sum1+=str[i]-'0';
    }
    int n=stoi(str);
    int mx=0;
    string ans;
    for(int i=(n/2);i>=2;i--)
    {
        int sum=0;
        if((n%i)==0)
        {
            string s=to_string(i);
             for(int j=0;j<s.length();j++)
               {
                     sum+=s[j]-'0';
              }
              if(mx<=sum)
              {
                  mx=sum;
                   ans=to_string(i);
              }    
        }
    }
    if(mx<sum1)
        ans=to_string(n);
    cout<<ans;
    return 0;
}
