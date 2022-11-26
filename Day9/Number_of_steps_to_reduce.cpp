class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num!=0)
        {
             ((num&1)==1)?num=num-1:num=num/2;
            c++;
        }
        return c;
        
    }
};
