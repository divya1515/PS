class Solution {
public:
    bool divisorGame(int n) {
        int c=0;
        while(n!=1)
        {
           n=n-1;
           c++;
        }
        if(c&1)
        return true;
        return false;
    }
};
