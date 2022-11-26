long long int strangeGrid(int r, int c) {
    long long int pr=(long long int)r/2;
    if((r&1)==0)
    pr-=1;
    long long int last_ele=(pr*5*2)-1;
    if(r&1)
    {
        last_ele-=1;
    }
    return (last_ele)+(2*c);
}
